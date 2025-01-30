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
    , indicePrato(-1) // Inicializa com valor inválido
    , modoEdicao(false) // Inicializa como falso (modo de cadastro)

{
    ui->setupUi(this);
}

telacadastrarprato::~telacadastrarprato()
{
    delete ui;
}
void telacadastrarprato::setModoEdicao(int indicePrato, const QString &nome, double preco, const QString &categoria) {
    this->modoEdicao = true; // Ativa o modo de edição
    this->indicePrato = indicePrato; // Armazena o índice do prato

    // Preenche os campos com os dados do prato
    ui->inserir_nome->setText(nome);
    ui->inserir_preco->setValue(preco);
    ui->inserir_categoria->setCurrentText(categoria);
}
void telacadastrarprato::salvardados() {
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

    // Captura os dados do formulário
    QString nome_prato = ui->inserir_nome->text();
    double preco = ui->inserir_preco->value();
    QString categoria = ui->inserir_categoria->currentText();

    if (modoEdicao) {
        if (indicePrato >= 0 && indicePrato < cardapio.size()) {
            QJsonObject prato;
            prato["nome"] = nome_prato;
            prato["preco"] = preco;
            prato["categoria"] = categoria;
            cardapio[indicePrato] = prato;  // Atualiza apenas o prato específico
        } else {
            QMessageBox::critical(this, "Erro", "Índice do prato inválido!");
            return;
        }
    } else {
        // Adiciona novo prato
        QJsonObject novoItem;
        novoItem["nome"] = nome_prato;
        novoItem["preco"] = preco;
        novoItem["categoria"] = categoria;
        cardapio.append(novoItem);
    }

    json["cardapio"] = cardapio;

    // Salva as alterações
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível salvar o arquivo JSON!");
        return;
    }

    QJsonDocument newDoc(json);
    file.write(newDoc.toJson());
    file.close();

    QMessageBox::information(this, "Sucesso", modoEdicao ? "Prato editado com sucesso!" : "Prato cadastrado com sucesso!");

    this->close();
}

void telacadastrarprato::on_pushButton_clicked()
{
    telacadastrarprato::salvardados();
}

