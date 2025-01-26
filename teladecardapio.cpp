#include "teladecardapio.h"
#include "ui_teladecardapio.h"

teladecardapio::teladecardapio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teladecardapio)
{
    ui->setupUi(this);
}

teladecardapio::~teladecardapio()
{
    delete ui;
}
