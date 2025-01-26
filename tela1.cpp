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


void tela1::on_pushButton_clicked()
{
    teladecardapio form2;

    form2.exec();
}


void tela1::on_pushButton_2_clicked()
{
    telacadastrarprato form3;

    form3.exec();
}


void tela1::on_pushButton_3_clicked()
{
    telacontabilizarpedido form4;

    form4.exec();
}


void tela1::on_pushButton_4_clicked()
{
    telarelatorio form5;

    form5.exec();
}

