#ifndef TELARELATORIO_H
#define TELARELATORIO_H

#include <QDialog>
#include <QJsonArray>

namespace Ui {
class telarelatorio;
}

class telarelatorio : public QDialog
{
    Q_OBJECT

public:
    explicit telarelatorio(QWidget *parent = nullptr);
    ~telarelatorio();
    void exibirRelatorioCompleto();
    void exibirMaisVendidos();
    void exibirMenosVendidos();
    void carregarRelatorio();


private:
    Ui::telarelatorio *ui;
    QJsonArray pedidos;
};

#endif // TELARELATORIO_H
