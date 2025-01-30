#ifndef TELACADASTRARPRATO_H
#define TELACADASTRARPRATO_H

#include <QDialog>

namespace Ui {
class telacadastrarprato;
}

class telacadastrarprato : public QDialog
{
    Q_OBJECT

public:
    explicit telacadastrarprato(QWidget *parent = nullptr);
    ~telacadastrarprato();
    void setModoEdicao(int indicePrato, const QString &nome, double preco, const QString &categoria); // Novo método
    void salvardados(); // Método existente


private:
    Ui::telacadastrarprato *ui;
    int indicePrato; // Armazena o índice do prato em edição
    bool modoEdicao; // Indica se está no modo de edição

private slots:
    void on_pushButton_clicked();
};

#endif // TELACADASTRARPRATO_H
