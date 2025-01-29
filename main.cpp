#include "tela2.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

void inserirUsuario(const QString& login, const QString& senha) {
    QSqlQuery query;
    query.prepare("INSERT INTO usuarios (login, senha) VALUES (:login, :senha)");
    query.bindValue(":login", login);
    query.bindValue(":senha", senha);

    if (!query.exec()) {
        qDebug() << "Erro ao inserir usuário ou ele já existe:" << query.lastError().text();
    } else {
        qDebug() << "Usuário" << login << "inserido com sucesso!";
    }
}

void inicializarBanco() {
    QSqlDatabase banco = QSqlDatabase::addDatabase("QSQLITE");
    banco.setDatabaseName("restaurante.db");

    if (!banco.open()) {
        qDebug() << "Erro ao abrir o banco de dados!" << banco.lastError().text();
        return;
    }
    qDebug() << "Banco de dados conectado com sucesso!";

    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS pratos ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "nome TEXT NOT NULL, "
                    "preco REAL NOT NULL, "
                    "categoria TEXT NOT NULL)")) {
        qDebug() << "Erro ao criar/verificar tabela 'pratos':" << query.lastError().text();
    } else {
        qDebug() << "Tabela 'pratos' criada/verificada com sucesso!";
    }
}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "restify3_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    // Inicializa o banco de dados antes de exibir qualquer tela
    inicializarBanco();


    // Inserindo usuários manualmente
    inserirUsuario("admin", "12345");
    inserirUsuario("usuario1", "senha123");
    inserirUsuario("joao", "minhasenha");
    inserirUsuario("", "");

    tela2 w;
    w.show();


    return a.exec();
}
