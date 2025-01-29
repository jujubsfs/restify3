#ifndef TELA2_H
#define TELA2_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class tela2;
}

class tela2 : public QDialog
{
    Q_OBJECT

public:
    explicit tela2(QWidget *parent = nullptr);
    ~tela2();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::tela2 *ui;
    bool conectarBanco();      // Função para conectar ao SQLite
    void criarTabelaUsuarios(); // Criar tabela caso não exista
    bool validarLogin(const QString& login, const QString& senha); // Valida login
};

#endif // TELA2_H
