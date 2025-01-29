#include "telacadastrarprato.h"
#include "ui_telacadastrarprato.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
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

void telacadastrarprato::on_pushButton_clicked()
{

    qDebug() << "Banco de dados aberto?" << QSqlDatabase::database().isOpen();

    // Pegar os valores dos campos
    QString nome = ui->lineEdit->text();
    double preco = ui->doubleSpinBox->value();
    QString categoria = ui->comboBox->currentText();

    // Aqui adicionamos a linha para depuração
    qDebug() << "Tentando inserir prato: " << nome << ", " << preco << ", " << categoria;


    if (nome.isEmpty() || categoria.isEmpty()) {
        qDebug() << "Erro: Nome ou Categoria não podem estar vazios!";
        return;
    }

    QSqlQuery query;

    query.prepare("PRAGMA table_info(pratos);");

    if (query.exec()) {
        while (query.next()) {
            qDebug() << "Coluna:" << query.value(1).toString()
            << " Tipo:" << query.value(2).toString();
        }
    } else {
        qDebug() << "Erro ao obter info da tabela:" << query.lastError().text();
    }

    query.prepare("INSERT INTO pratos (nome, preco, categoria) VALUES (:nome, :preco, :categoria)");
    query.bindValue(":nome", nome);
    query.bindValue(":preco", preco);
    query.bindValue(":categoria", categoria);

    if (!query.exec()) {
        qDebug() << "Erro ao salvar prato:" << query.lastError().text();
    } else {
        qDebug() << "Prato salvo com sucesso!";
    }
}

