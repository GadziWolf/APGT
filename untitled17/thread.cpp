#include "thread.h"
#include "qdebug.h"

Thread::Thread(QObject *parent)
    : QThread{parent}
{

}


void Thread::run() {
    qDebug() << "Running...";

    int x;
     x = rand();
     qDebug() << "x = " << x;

     int y;
       y = rand();
       qDebug() << "y = " << y;
}
