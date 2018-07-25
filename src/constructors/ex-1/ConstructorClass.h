#ifndef CONSTRUCTORCLASS_H
#define CONSTRUCTORCLASS_H

class ConstructorClass 
{

public:
    ConstructorClass(int a, int b)
        : a_(a)
        , b_(b)
    {}

private:
    int a_;
    int b_;
};

#endif
