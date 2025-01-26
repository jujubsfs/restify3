#ifndef TELACONTABILIZARPEDIDO_H
#define TELACONTABILIZARPEDIDO_H

#include <QDialog>

namespace Ui {
class telacontabilizarpedido;
}

class telacontabilizarpedido : public QDialog
{
    Q_OBJECT

public:
    explicit telacontabilizarpedido(QWidget *parent = nullptr);
    ~telacontabilizarpedido();

private:
    Ui::telacontabilizarpedido *ui;
};

#endif // TELACONTABILIZARPEDIDO_H
