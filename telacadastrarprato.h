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

private slots:
    void on_pushButton_clicked();

private:
    Ui::telacadastrarprato *ui;
};

#endif // TELACADASTRARPRATO_H
