#include "telarelatorio.h"
#include "ui_telarelatorio.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>

telarelatorio::telarelatorio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telarelatorio)
{
    ui->setupUi(this);

    // Carrega os dados de pedidos ao abrir a tela
    carregarRelatorio();
}

telarelatorio::~telarelatorio()
{
    delete ui;
}

// Função para carregar o relatório completo
void telarelatorio::carregarRelatorio()
{
    QFile file("pedidos.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo de pedidos!");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject json = doc.object();
    pedidos = json["pedidos"].toArray();

    exibirRelatorioCompleto(); // Exibe o relatório sem filtros inicialmente
}
void telarelatorio::exibirRelatorioCompleto()
{
    ui->listWidget->clear();

    for (const QJsonValue &pedido : pedidos) {
        QJsonObject obj = pedido.toObject();
        QString cliente = obj["cliente"].toString();
        QJsonArray itens = obj["itens"].toArray();

        ui->listWidget->addItem(cliente + ":");

        for (const QJsonValue &item : itens) {
            QJsonObject prato = item.toObject();
            QString texto = QString("  - %1: %2 unidades")
                                .arg(prato["nome"].toString())
                                .arg(prato["quantidade"].toInt());
            ui->listWidget->addItem(texto);
        }

        ui->listWidget->addItem(""); // Linha em branco entre os pedidos
    }
}
// Função para exibir os pratos mais vendidos
void telarelatorio::exibirMaisVendidos()
{
    ui->listWidget->clear();

    QMap<QString, int> vendas;

    // Soma as quantidades vendidas de cada prato
    for (const QJsonValue &pedido : pedidos) {
        QJsonArray itens = pedido.toObject()["itens"].toArray();
        for (const QJsonValue &item : itens) {
            QJsonObject prato = item.toObject();
            QString nome = prato["nome"].toString();
            int quantidade = prato["quantidade"].toInt();
            vendas[nome] += quantidade;
        }
    }

    // Ordena os pratos por quantidade vendida
    QList<QString> pratosOrdenados = vendas.keys();
    std::sort(pratosOrdenados.begin(), pratosOrdenados.end(),
              [&vendas](const QString &a, const QString &b) {
                  return vendas[a] > vendas[b];
              });

    // Exibe os pratos mais vendidos
    for (const QString &prato : pratosOrdenados) {
        QString texto = QString("%1 - Vendido: %2 vezes")
        .arg(prato)
            .arg(vendas[prato]);
        ui->listWidget->addItem(texto);
    }
}

// Função para exibir os pratos menos vendidos
void telarelatorio::exibirMenosVendidos()
{
    ui->listWidget->clear();

    QMap<QString, int> vendas;

    // Soma as quantidades vendidas de cada prato
    for (const QJsonValue &pedido : pedidos) {
        QJsonArray itens = pedido.toObject()["itens"].toArray();
        for (const QJsonValue &item : itens) {
            QJsonObject prato = item.toObject();
            QString nome = prato["nome"].toString();
            int quantidade = prato["quantidade"].toInt();
            vendas[nome] += quantidade;
        }
    }

    // Ordena os pratos por quantidade vendida
    QList<QString> pratosOrdenados = vendas.keys();
    std::sort(pratosOrdenados.begin(), pratosOrdenados.end(),
              [&vendas](const QString &a, const QString &b) {
                  return vendas[a] < vendas[b];
              });

    // Exibe os pratos menos vendidos
    for (const QString &prato : pratosOrdenados) {
        QString texto = QString("%1 - Vendido: %2 vezes")
        .arg(prato)
            .arg(vendas[prato]);
        ui->listWidget->addItem(texto);
    }
}
