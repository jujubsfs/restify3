#include "tela2.h"
#include "ui_tela2.h"
#include "tela1.h"
#include <QMessageBox>
#include "database.h"
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

// Caminho do arquivo de banco de dados primitivo
const std::string databaseFile = "usuarios";

bool tela2::verificarCredenciais(const QString &login, const QString &senha){
    // Acessa o banco de dados para buscar a senha associada ao nome de usuário
    Database& db = Database::getInstance();

    // Obtém as senhas associadas ao nome (a chave)
    std::vector<QString> senhas = db.getData(login);

    // Verifica se a senha existe no banco de dados para o nome de usuário
    for (const auto& storedSenha : senhas) {
        if (storedSenha == senha) {
            return true;  // Login bem-sucedido
        }
    }
    return false;  // Senha ou usuário incorreto
}


tela2::tela2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela2)
{
    ui->setupUi(this);

    // Configura a cor de fundo
    this->setStyleSheet("background-color: #556B2F;");
}

tela2::~tela2()
{
    delete ui;
}

void tela2::on_pushButton_clicked()
{
    tela1 *telaScreen = new tela1();
    telaScreen->show();
    this->close();
}



void tela2::on_pushButton_2_clicked()
{
    QString login = ui->lineEdit->text();
    QString senha = ui->lineEdit_2->text();

    if (verificarCredenciais(login, senha)) {
        // Login bem-sucedido, cria e exibe a tela de menu
        tela1 *telaScreen = new tela1(this); // Passa a instância da MainWindow
        telaScreen->setAttribute(Qt::WA_DeleteOnClose); // Garante que o menu seja deletado ao fechar
        telaScreen->show();

        // Fecha a janela atual
        this->hide();

    } else {
        // Login falhou, exibe mensagem de erro
        QMessageBox msgBox;

        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("<font color='black'>Usuário ou senha incorretos!</font>");
        msgBox.setWindowTitle("Login");

        // Define explicitamente as cores de fundo e texto
        msgBox.setStyleSheet("QMessageBox { background-color: white; color: black; }");

        msgBox.exec();
    }

    this->close();
}

