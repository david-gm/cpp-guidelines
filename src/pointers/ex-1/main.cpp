#include <iostream>

#include "MyClass.h"

int main()
{
	const std::string *p;
	{
		MyClass c;
		std::cout << c.getString() << std::endl;
		p = c.getStringPt();
	}
	std::cout << *p << std::endl;
	return 0;
}