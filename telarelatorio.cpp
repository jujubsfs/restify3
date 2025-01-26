#include "telarelatorio.h"
#include "ui_telarelatorio.h"

telarelatorio::telarelatorio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telarelatorio)
{
    ui->setupUi(this);
}

telarelatorio::~telarelatorio()
{
    delete ui;
}
