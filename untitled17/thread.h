#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class Thread : public QThread
{
public:
    explicit Thread(QObject *parent = nullptr);
    void run();
    QString name;

};

#endif // THREAD_H
