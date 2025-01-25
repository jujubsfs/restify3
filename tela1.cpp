#include "tela1.h"
#include "ui_tela1.h"

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
