#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H
#include <string>

#include "subject.h"
using namespace std;

class ProgressBar: public Subject {
public:
    virtual ~ProgressBar() = default;

    virtual string buildProgressBar(int percent)=0;
    virtual void showProgressBar(int percent)=0;

    void AddObserver(Observer *o) override;
    void RemObserver(Observer *o) override;
    void notify() override;

    ProgressBar() = default;

    explicit ProgressBar(const char * name);
};



#endif //PROGRESSBAR_H
