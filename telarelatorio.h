#ifndef TELARELATORIO_H
#define TELARELATORIO_H

#include <QDialog>

namespace Ui {
class telarelatorio;
}

class telarelatorio : public QDialog
{
    Q_OBJECT

public:
    explicit telarelatorio(QWidget *parent = nullptr);
    ~telarelatorio();

private:
    Ui::telarelatorio *ui;
};

#endif // TELARELATORIO_H
