#ifndef CONSTRUCTORCLASSFAIL_H
#define CONSTRUCTORCLASSFAIL_H

class ConstructorClassFail
{

public:
    ConstructorClassFail(int a, int b)
        : a_(a)
        , b_(b)
    {}

private:
    int a_;
    int b_;
};

#endif
