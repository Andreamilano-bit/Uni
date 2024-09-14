
#ifndef PROGRESSBAR_OBSERVER_H
#define PROGRESSBAR_OBSERVER_H
#include "iostream"
#include "Observer.h"
#include "ProgressBar.h"
using namespace std;

class ProgressBar_Observer:public Observer {
public:
    ProgressBar* progress;
    ProgressBar_Observer(ProgressBar* progress): progress(progress) {
        attach();
    }
    ~ProgressBar_Observer() {
        detach();
        cout <<"[RIMOZIONE] Rimozione dell'observer";
    }
    void attach() override {
        progress->AddObserver(this);
    }
    void detach() override {
        progress->RemObserver(this);
    }
    void update() override {
        cout<<"[AGGIORNAMENTO]";
    }
};
#endif //PROGRESSBAR_OBSERVER_H
