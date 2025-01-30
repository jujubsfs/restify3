#include "teladecardapio.h"
#include "ui_teladecardapio.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QDebug>

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

void teladecardapio::carregarcardapio(){
    // Abrir o arquivo JSON
    QFile file("cardapio.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo JSON!");
        return;
    }

    // Ler o conteúdo do arquivo
    QByteArray dados = file.readAll();
    file.close();

    // Converter o JSON para um objeto QJsonDocument
    QJsonDocument doc = QJsonDocument::fromJson(dados);
    if (doc.isNull()) {
        QMessageBox::critical(this, "Erro", "O arquivo JSON está vazio ou é inválido!");
        return;
    }

    // Converter o documento para um objeto JSON
    QJsonObject json = doc.object();

    // Verificar se o array "cardapio" existe
    if (!json.contains("cardapio") || !json["cardapio"].isArray()) {
        QMessageBox::critical(this, "Erro", "O arquivo JSON não contém um cardápio válido!");
        return;
    }

    // Obter o array "cardapio"
    QJsonArray cardapio = json["cardapio"].toArray();

    // Preparar uma string para exibir os dados
    QString cardapioTexto = "Cardápio:\n\n";

    // Iterar sobre os itens do cardápio
    for (const QJsonValue &item : cardapio) {
        QJsonObject obj = item.toObject();
        QString nome = obj["nome"].toString();
        double preco = obj["preco"].toDouble();
        QString categoria = obj["categoria"].toString();

        QString itemText = QString("%1 - R$ %2 - %3").arg(nome).arg(preco).arg(categoria);
        ui->listWidget->addItem(itemText);}
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
