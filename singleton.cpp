#include "singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::GetInstance()
{
    if(instance == nullptr)
        instance = new Singleton();

    qInfo() << "instance addr : " << &instance;
    return instance;
}

Singleton::Singleton() {
    qInfo() << "Class initialized" ;
}
