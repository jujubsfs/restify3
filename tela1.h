#ifndef TELA1_H
#define TELA1_H

#include <QDialog>

namespace Ui {
class tela1;
}

class tela1 : public QDialog
{
    Q_OBJECT

public:
    explicit tela1(QWidget *parent = nullptr);
    ~tela1();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::tela1 *ui;
};

#endif // TELA1_H
