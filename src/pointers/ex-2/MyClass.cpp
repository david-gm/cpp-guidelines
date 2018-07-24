#include "MyClass.h"

MyClass::MyClass() 
{
	my_string_ = new std::string("abc");
}


MyClass::~MyClass()
{
	if(my_string_)
		delete my_string_;
}


std::string MyClass::getString() const
{ 
	return *my_string_;
}

const std::string *MyClass::getStringPt() const
{ 
	return my_string_;
}