/********************************************************************************
** Form generated from reading UI file 'teladecardapio.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADECARDAPIO_H
#define UI_TELADECARDAPIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teladecardapio
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *excluir_prato;
    QPushButton *editar_prato;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *teladecardapio)
    {
        if (teladecardapio->objectName().isEmpty())
            teladecardapio->setObjectName("teladecardapio");
        teladecardapio->resize(850, 560);
        teladecardapio->setStyleSheet(QString::fromUtf8("background-color: #556B2F"));
        label = new QLabel(teladecardapio);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 80, 371, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Script")});
        font.setPointSize(28);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(teladecardapio);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 200, 801, 291));
        listWidget->setStyleSheet(QString::fromUtf8("color: white;"));
        excluir_prato = new QPushButton(teladecardapio);
        excluir_prato->setObjectName("excluir_prato");
        excluir_prato->setGeometry(QRect(440, 510, 391, 29));
        excluir_prato->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        editar_prato = new QPushButton(teladecardapio);
        editar_prato->setObjectName("editar_prato");
        editar_prato->setGeometry(QRect(30, 510, 391, 29));
        editar_prato->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 0);"));
        label_2 = new QLabel(teladecardapio);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(660, -10, 191, 181));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/imagem/em cima.png")));
        label_3 = new QLabel(teladecardapio);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, -110, 261, 451));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imagem/esquerda.png")));
        label_3->raise();
        label->raise();
        listWidget->raise();
        excluir_prato->raise();
        editar_prato->raise();
        label_2->raise();

        retranslateUi(teladecardapio);

        QMetaObject::connectSlotsByName(teladecardapio);
    } // setupUi

    void retranslateUi(QDialog *teladecardapio)
    {
        teladecardapio->setWindowTitle(QCoreApplication::translate("teladecardapio", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("teladecardapio", " ver card\303\241pio", nullptr));
        excluir_prato->setText(QCoreApplication::translate("teladecardapio", "excluir prato", nullptr));
        editar_prato->setText(QCoreApplication::translate("teladecardapio", "editar prato", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class teladecardapio: public Ui_teladecardapio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADECARDAPIO_H
