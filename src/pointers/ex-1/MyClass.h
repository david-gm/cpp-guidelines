#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass {
public:
	MyClass();

	std::string getString() const;
	const std::string *getStringPt() const;

private:
	std::string *my_string_;

};

#endif// MYCLASS_H