#ifndef TELADECARDAPIO_H
#define TELADECARDAPIO_H

#include <QDialog>

namespace Ui {
class teladecardapio;
}

class teladecardapio : public QDialog
{
    Q_OBJECT

public:
    explicit teladecardapio(QWidget *parent = nullptr);
    ~teladecardapio();

private:
    Ui::teladecardapio *ui;
};

#endif // TELADECARDAPIO_H
