#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
}

Person::~Person()
{
	std::cout << "destructing " << firstname << " " << lastname << '\n';
}

std::string Person::GetName()
{
	return firstname + " " + lastname;
}

// 6. Operators - Writing an Overload example
Person Person::operator+(int i) const
{
	return Person(firstname, lastname, arbitrarynumber + i);
}

Person operator+(int i, Person const& p)
{
	// Just uses the operator + to do the other
	return p + i;
}