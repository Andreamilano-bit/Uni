#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"


class Subject {
public:
    ~Subject(){}

    virtual void AddObserver(Observer *o) = 0;
    virtual void RemObserver(Observer *o) = 0;
    virtual void notify() = 0;
};



#endif //SUBJECT_H
