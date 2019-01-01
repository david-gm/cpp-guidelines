#include <vector>
#include <iostream>
#include "ConstructorClassFail.h"

int main()
{
    std::vector<ConstructorClassFail> vec;
    vec.push_back(ConstructorClassFail());
    return 0;
}
