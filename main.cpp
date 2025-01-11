#include <QCoreApplication>
#include "singleton.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Singleton *obj = Singleton::GetInstance();
    qInfo() << "Created object 1";

    Singleton *obj2 = Singleton::GetInstance();
    qInfo() << "Created object 2";

    Singleton *obj3 = Singleton::GetInstance();
    qInfo() << "Created object 3";

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
