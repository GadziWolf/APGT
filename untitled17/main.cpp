#include <QCoreApplication>
#include <QThread>
#include "thread.h"
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Thread t1;
  t1.name = "Thread 1";
  Thread t2;
  t2.name = "Thread 2";
  Thread t3;
  t3.name = "Thread 3";

  t1.start();
  t2.start();
  t3.start();









    return a.exec();
}
