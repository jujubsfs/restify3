#include "telacontabilizarpedido.h"
#include "ui_telacontabilizarpedido.h"
#include <QFile>
#include <QJsonDocument>
#include <QMessageBox>

telacontabilizarpedido::telacontabilizarpedido(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telacontabilizarpedido)
{
    ui->setupUi(this);

    // Carrega os pratos disponíveis no ComboBox
    carregarPratos();
}

telacontabilizarpedido::~telacontabilizarpedido()
{
    delete ui;
}

// Carrega os pratos do arquivo JSON
void telacontabilizarpedido::carregarPratos()
{
    QFile file("cardapio.json");
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo de cardápio!");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject json = doc.object();
    pratosDisponiveis = json["cardapio"].toArray();

    // Preenche o ComboBox com os nomes dos pratos
    for (const QJsonValue &prato : pratosDisponiveis) {
        ui->comboBox->addItem(prato.toObject()["nome"].toString());
    }
}

void telacontabilizarpedido::on_adicionarAoPedido_clicked()
{
    QString pratoSelecionado = ui->comboBox->currentText();
    int quantidade = ui->spinBox->value();

    if (pratoSelecionado.isEmpty() || quantidade <= 0) {
        QMessageBox::warning(this, "Aviso", "Selecione um prato e informe a quantidade!");
        return;
    }

    // Verifica se o prato já está no pedido
    bool pratoJaExiste = false;
    for (int i = 0; i < pedidoAtual.size(); ++i) {
        QJsonObject obj = pedidoAtual[i].toObject();
        if (obj["nome"].toString() == pratoSelecionado) {
            // Atualiza a quantidade do prato existente
            obj["quantidade"] = obj["quantidade"].toInt() + quantidade;
            pedidoAtual[i] = obj; // Atualiza o objeto no array
            pratoJaExiste = true;
            break;
        }
    }

    // Caso o prato não exista, adiciona como um novo item
    if (!pratoJaExiste) {
        QJsonObject novoPrato;
        novoPrato["nome"] = pratoSelecionado;
        novoPrato["quantidade"] = quantidade;
        pedidoAtual.append(novoPrato);
    }

    // Atualiza a exibição do pedido
    atualizarListaPedido();
}

void telacontabilizarpedido::atualizarListaPedido()
{
    ui->listWidget->clear(); // Limpa a lista visual

    // Preenche a lista com os pratos do pedidoAtual
    for (const QJsonValue &item : pedidoAtual) {
        QJsonObject obj = item.toObject();
        QString texto = QString("%1 - Quantidade: %2")
                            .arg(obj["nome"].toString())
                            .arg(obj["quantidade"].toInt());
        ui->listWidget->addItem(texto);
    }
}


// Salva o pedido em um arquivo JSON
void telacontabilizarpedido::on_confirmarPedido_clicked()
{
    QFile file("pedidos.json");
    if (!file.open(QIODevice::ReadWrite)) {
        QMessageBox::critical(this, "Erro", "Não foi possível abrir o arquivo de pedidos!");
        return;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonObject json = doc.object();
    QJsonArray pedidos = json["pedidos"].toArray();

    // Adiciona o pedido atual ao array de pedidos
    QJsonObject novoPedido;
    novoPedido["cliente"] = "Pedido " + QString::number(pedidos.size() + 1); // Nome genérico
    novoPedido["itens"] = pedidoAtual;
    pedidos.append(novoPedido);

    // Salva o arquivo JSON
    json["pedidos"] = pedidos;
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::critical(this, "Erro", "Não foi possível salvar o arquivo de pedidos!");
        return;
    }

    QJsonDocument newDoc(json);
    file.write(newDoc.toJson());
    file.close();

    QMessageBox::information(this, "Sucesso", "Pedido salvo com sucesso!");

    // Limpa o pedido atual
    pedidoAtual = QJsonArray();
    atualizarListaPedido();
}
