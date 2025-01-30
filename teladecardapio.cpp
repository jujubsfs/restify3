#include "teladecardapio.h"
#include "ui_teladecardapio.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QDebug>
#include "telacadastrarprato.h"

teladecardapio::teladecardapio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teladecardapio)
{
    ui->setupUi(this);
}

teladecardapio::~teladecardapio()
{
    delete ui;
}

void teladecardapio::on_excluir_prato_clicked()
{
    {
        int selectedRow = ui->listWidget->currentRow(); // Pega o índice do item selecionado
        if (selectedRow == -1) {
            QMessageBox::warning(this, "Aviso", "Nenhum prato selecionado!");
            return;
        }

        // Remove o item do QListWidget
        delete ui->listWidget->takeItem(selectedRow);

        // Atualiza o arquivo JSON
        QFile file("cardapio.json");
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo JSON!");
            return;
        }

        QByteArray data = file.readAll();
        file.close();

        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject json = doc.object();
        QJsonArray cardapio = json["cardapio"].toArray();

        // Remove o item selecionado do array
        cardapio.removeAt(selectedRow);
        json["cardapio"] = cardapio;

        // Salva o JSON atualizado
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::critical(this, "Erro", "Não foi possível salvar o arquivo JSON!");
            return;
        }

        QJsonDocument newDoc(json);
        file.write(newDoc.toJson());
        file.close();

        QMessageBox::information(this, "Sucesso", "Prato excluído com sucesso!");


    }
}
void teladecardapio::on_editar_prato_clicked() {
    int selectedRow = ui->listWidget->currentRow();
    if (selectedRow == -1) {
        QMessageBox::warning(this, "Aviso", "Nenhum prato selecionado!");
        return;
    }

    QFile file("cardapio.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo JSON!");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject json = doc.object();
    QJsonArray cardapio = json["cardapio"].toArray();

    if (selectedRow >= 0 && selectedRow < cardapio.size()) {
        QJsonObject prato = cardapio[selectedRow].toObject();
        QString nome = prato["nome"].toString();
        double preco = prato["preco"].toDouble();
        QString categoria = prato["categoria"].toString();

        telacadastrarprato telaEditar(this);
        telaEditar.setModoEdicao(selectedRow, nome, preco, categoria);
        telaEditar.exec();

        carregarcardapio(); // Agora o cardápio é recarregado após edição
    }
}

void teladecardapio::carregarcardapio(){
    QFile file("cardapio.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo JSON!");
        return;
    }

    QByteArray dados = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(dados);
    if (doc.isNull()) {
        QMessageBox::critical(this, "Erro", "O arquivo JSON está vazio ou é inválido!");
        return;
    }

    QJsonObject json = doc.object();
    if (!json.contains("cardapio") || !json["cardapio"].isArray()) {
        QMessageBox::critical(this, "Erro", "O arquivo JSON não contém um cardápio válido!");
        return;
    }

    QJsonArray cardapio = json["cardapio"].toArray();

    ui->listWidget->clear(); // Evita duplicação

    for (const QJsonValue &item : cardapio) {
        QJsonObject obj = item.toObject();
        QString nome = obj["nome"].toString();
        double preco = obj["preco"].toDouble();
        QString categoria = obj["categoria"].toString();

        QString itemText = QString("Nome: %1 - R$ %2 - Categoria: %3").arg(nome).arg(preco).arg(categoria);
        ui->listWidget->addItem(itemText);
    }
}
