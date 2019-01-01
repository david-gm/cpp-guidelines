#ifndef CONSTRUCTORCLASS_H
#define CONSTRUCTORCLASS_H

class ConstructorClass
{

public:
    ConstructorClass() : a_(0), b_(0) {}
    ConstructorClass(int a, int b)
        : a_(a)
        , b_(b)
    {}

private:
    int a_;
    int b_;
};

#endif
