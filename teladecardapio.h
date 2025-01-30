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
    void carregarcardapio();
private slots:
    void on_excluir_prato_clicked();

    void on_editar_prato_clicked();

private:
    Ui::teladecardapio *ui;

};

#endif // TELADECARDAPIO_H
