#include "tela2.h"
#include "ui_tela2.h"
#include "tela1.h"

tela2::tela2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela2)
{
    ui->setupUi(this);

    // Configura a cor de fundo
    this->setStyleSheet("background-color: #556B2F;");
}

tela2::~tela2()
{
    delete ui;
}

void tela2::on_pushButton_clicked()
{
    tela1 *telaScreen = new tela1();
    telaScreen->show();
    this->close();
}



void tela2::on_pushButton_2_clicked()
{
    tela1 *telaScreen = new tela1();
    telaScreen->show();
    this->close();
}

