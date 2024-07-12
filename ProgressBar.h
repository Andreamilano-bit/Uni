#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H
#include <string>
using namespace std;

class ProgressBar {
public:
    virtual ~ProgressBar() = default;

    virtual string buildProgressBar(int percent)=0;
    virtual void showProgressBar(int percent)=0;
};



#endif //PROGRESSBAR_H
