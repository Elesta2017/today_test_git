#include <QCoreApplication>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    qDebug()<<"git_test 0.2";
    qDebug()<<"Hello, GIT";



    return a.exec();
}
