#include "telacontabilizarpedido.h"
#include "ui_telacontabilizarpedido.h"

telacontabilizarpedido::telacontabilizarpedido(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telacontabilizarpedido)
{
    ui->setupUi(this);
}

telacontabilizarpedido::~telacontabilizarpedido()
{
    delete ui;
}
