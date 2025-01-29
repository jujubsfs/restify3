#include "telacadastrarprato.h"
#include "ui_telacadastrarprato.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QDebug>

telacadastrarprato::telacadastrarprato(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telacadastrarprato)
{
    ui->setupUi(this);
}

telacadastrarprato::~telacadastrarprato()
{
    delete ui;
}

void telacadastrarprato::salvardados() {
    QJsonObject json;
    QFile file("cardapio.json");

    // Verifica se o arquivo já existe
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        file.close();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        json = doc.object(); // Carrega o JSON existente
    }

    // Captura os dados do formulário
    QString nome_prato = ui->inserir_nome->text();
    double preco = ui->inserir_preco->value(); // Captura o valor diretamente do QDoubleSpinBox
    QString categoria = ui->inserir_categoria->currentText(); // Captura o texto do item selecionado

    // Verifica se o array "cardapio" já existe no JSON
    QJsonArray cardapio;
    if (json.contains("cardapio")) {
        cardapio = json["cardapio"].toArray();
    }

    // Adiciona o novo prato ao array
    QJsonObject novoItem;
    novoItem["nome"] = nome_prato;
    novoItem["preco"] = preco;
    novoItem["categoria"] = categoria;
    cardapio.append(novoItem);
    json["cardapio"] = cardapio;

    // Salva o JSON atualizado
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível salvar o arquivo JSON!");
        return;
    }

    QJsonDocument doc(json);
    file.write(doc.toJson());
    file.close();

    // Limpa os campos após salvar
    ui->inserir_nome->clear();
    ui->inserir_preco->clear();
    ui->inserir_categoria->setCurrentIndex(0); // Volta para o primeiro item do QComboBox

    // Exibe mensagem de sucesso
    QMessageBox::information(this, "Sucesso", "Dados salvos com sucesso!");
}
void telacadastrarprato::on_pushButton_clicked()
{
    telacadastrarprato::salvardados();

}

