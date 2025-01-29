#include "telacadastrarprato.h"
#include "ui_telacadastrarprato.h"

telacadastrarprato::telacadastrarprato(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::telacadastrarprato)
{
    ui->setupUi(this);
}

telacadastrarprato::~telacadastrarprato()
{
    delete ui;
}
