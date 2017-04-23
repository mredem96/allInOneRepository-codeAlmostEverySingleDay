#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <RtMidi.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/_files_qml/instantiationTest.qml")));
    return app.exec();
}
