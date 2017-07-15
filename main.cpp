#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>
#include "themodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    TheModel model;



    QQuickView view(QUrl(QStringLiteral("qrc:/main.qml")));
    view.create();
    view.rootContext()->setContextProperty("model", &model);

    view.show();
    view.setTitle("Hello World");



    return app.exec();
}
