#include "Person.h"
#include "Tweeter.h"
#include <iostream>

int main()
{
	Person p1("John", "Smith", 123);
	{
		// Destructor example:
		// p2 will be initialised below, then destructed upon closing bracket on L11
		Person p2("Matt", "Jones", 456);
	}
	std::cout << "after innermost block" << '\n';

	// Inheritance
	Person p3("Joe", "Smith", 789);
	{
		Tweeter t1("Someone", "Else", 111, "@whoever");
		std::string name2 = t1.getName();
	}

	return 0;
}