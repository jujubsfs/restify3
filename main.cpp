#include "tela2.h"
#include "database.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Inicializa o banco de dados de usuários
    Database& db = Database::getInstance();
    db.addData("admin", "12345");
    db.addData("user", "password123");
    db.addData("adri", "0404");
    db.addData("", "");

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "restify3_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    tela2 w;
    w.show();
    return a.exec();
}
