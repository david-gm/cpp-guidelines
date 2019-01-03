#include <string>
#include <iostream>

// (1) stuct name in camel-case
struct TCAStruct
{
    // (2) members in lower case, separated by underline; no suffix '_' here, as the mebers should be global
    int a_number = 1;
    float second_number = 3.0;
    std::string name = "TCAStruct";
    // (3) to distinguish CONSTANTS easily, put them in capital letters, where ever suitable, use '_' to seperate names
    const float PI = 3.1415;
};

// (1) class name in camel-case
class TCANaming
{
public:
    TCANaming() {};    // constuctor

    // (2) member function names are in camel-case notation without underlines if possible
    std::string getName() const { return my_name_; };  
private:
    // (3) members are lower case, separated by underline;
    // IMPORTANT: members of a class a easily distinguishable by other variables by a suffix '_'
    int my_num_ = 0;
    std::string my_name_ = "TCA";
    TCAStruct tca_struct_;

    // other possibilities for member naming we do not emphasize:
    // - m_my_num:              prefix m_; all members start with m_, which makes them harder to find in auto complete
    // - myNum:                 camel-case for members; can be easily mistaken for function names
    // - iMyNum or m_imy_num:   hungarian notation: very difficult to read
};

int main()
{
    TCANaming tca_naming;
    std::cout << tca_naming.getName() << std::endl;
    return 0;
}