#ifndef TELACONTABILIZARPEDIDO_H
#define TELACONTABILIZARPEDIDO_H

#include <QDialog>
#include <QJsonArray>
#include <QJsonObject>

namespace Ui {
class telacontabilizarpedido;
}

class telacontabilizarpedido : public QDialog
{
    Q_OBJECT

public:
    explicit telacontabilizarpedido(QWidget *parent = nullptr);
    ~telacontabilizarpedido();

private slots:
    void on_adicionarAoPedido_clicked(); // Adiciona pratos ao pedido
    void on_confirmarPedido_clicked();  // Salva o pedido em JSON

private:
    Ui::telacontabilizarpedido *ui;
    QJsonArray pratosDisponiveis;  // Lista de pratos carregada do JSON
    QJsonArray pedidoAtual;       // Pedido temporário
    void carregarPratos();        // Carrega os pratos do cardápio
    void atualizarListaPedido();  // Atualiza a exibição do pedido atual
};

#endif // TELACONTABILIZARPEDIDO_H
