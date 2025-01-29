#include "tela2.h"
#include "ui_tela2.h"
#include "tela1.h"

// Construtor da Tela 2 (Login)
tela2::tela2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tela2)
{
    ui->setupUi(this);

    // Configura a cor de fundo
    this->setStyleSheet("background-color: #556B2F;");

    // Conectar ao banco de dados
    if (conectarBanco()) {
        criarTabelaUsuarios();  // Criar tabela se não existir
    }
}

// Destrutor da tela2
tela2::~tela2()
{
    delete ui;
}

// 📌 Função para conectar ao banco SQLite
bool tela2::conectarBanco() {
    QSqlDatabase banco = QSqlDatabase::addDatabase("QSQLITE");
    banco.setDatabaseName("usuarios.db"); // Arquivo do banco de dados

    if (!banco.open()) {
        qDebug() << "Erro ao abrir o banco:" << banco.lastError().text();
        return false;
    }
    qDebug() << "Banco de dados conectado com sucesso!";
    return true;
}

// 📌 Criar a tabela de usuários caso não exista
void tela2::criarTabelaUsuarios() {
    QSqlQuery query;
    QString sql = "CREATE TABLE IF NOT EXISTS usuarios ("
                  "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                  "login TEXT UNIQUE, "
                  "senha TEXT)";

    if (!query.exec(sql)) {
        qDebug() << "Erro ao criar tabela:" << query.lastError().text();
    } else {
        qDebug() << "Tabela 'usuarios' criada/verificada com sucesso!";
    }
}

// 📌 Validar Login
bool tela2::validarLogin(const QString& login, const QString& senha) {
    QSqlQuery query;
    query.prepare("SELECT * FROM usuarios WHERE login = :login AND senha = :senha");
    query.bindValue(":login", login);
    query.bindValue(":senha", senha); // Idealmente, use hash de senha

    if (query.exec() && query.next()) {
        qDebug() << "Login bem-sucedido!";
        return true;
    }

    qDebug() << "Login falhou!";
    return false;
}

// 📌 Quando o usuário clica no botão "Começar"
void tela2::on_pushButton_2_clicked()
{
    QString login = ui->lineEdit->text();
    QString senha = ui->lineEdit_2->text();

    if (validarLogin(login, senha)) {
        QMessageBox::information(this, "Login", "Bem-vindo!");
        tela1 *telaScreen = new tela1();
        telaScreen->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Erro", "Login ou senha incorretos.");
    }
}
