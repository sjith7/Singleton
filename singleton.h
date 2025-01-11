#ifndef SINGLETON_H
#define SINGLETON_H
#include <QDebug>
class Singleton
{
public:
    static Singleton *GetInstance();
private:
    Singleton();
    ~Singleton();
    static Singleton *instance;
};

#endif // SINGLETON_H
