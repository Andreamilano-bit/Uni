

#ifndef OBSERVER_H
#define OBSERVER_H



class Observer {
public:
    virtual ~Observer(){}
    virtual void attach() = 0;
    virtual void detach() = 0;
    virtual void update() = 0;
};



#endif //OBSERVER_H
