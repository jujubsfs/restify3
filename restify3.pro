QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    tela1.cpp \
    tela2.cpp \
    telacadastrarprato.cpp \
    telacontabilizarpedido.cpp \
    teladecardapio.cpp \
    telarelatorio.cpp

HEADERS += \
    tela1.h \
    tela2.h \
    telacadastrarprato.h \
    telacontabilizarpedido.h \
    teladecardapio.h \
    telarelatorio.h

FORMS += \
    tela1.ui \
    tela2.ui \
    telacadastrarprato.ui \
    telacontabilizarpedido.ui \
    teladecardapio.ui \
    telarelatorio.ui


TRANSLATIONS += \
    restify3_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
