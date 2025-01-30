#include "tela1.h"
#include "ui_tela1.h"
#include "teladecardapio.h"
#include "telacadastrarprato.h"
#include "telacontabilizarpedido.h"
#include "telarelatorio.h"

tela1::tela1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela1)
{
    ui->setupUi(this);
}

tela1::~tela1()
{
    delete ui;
}

// Tela de cardápio
void tela1::on_pushButton_clicked()
{
    teladecardapio *telaCardapio = new teladecardapio(this);
    telaCardapio->setAttribute(Qt::WA_DeleteOnClose); // Libera memória ao fechar
    telaCardapio->carregarcardapio();
    telaCardapio->show();
}

// Tela de cadastros
void tela1::on_pushButton_2_clicked()
{
    telacadastrarprato *telaCadastrarPrato = new telacadastrarprato(this);
    telaCadastrarPrato->setAttribute(Qt::WA_DeleteOnClose);
    telaCadastrarPrato->show();
}

// Tela de pedidos
void tela1::on_pushButton_3_clicked()
{
    telacontabilizarpedido *form4 = new telacontabilizarpedido(this);
    form4->setAttribute(Qt::WA_DeleteOnClose);
    form4->show();
}

// Tela de relatório
void tela1::on_pushButton_4_clicked()
{
    telarelatorio *form5 = new telarelatorio(this);
    form5->setAttribute(Qt::WA_DeleteOnClose);
    form5->show();
}
