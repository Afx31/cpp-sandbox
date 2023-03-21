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

std::string Person::getName()
{
	return firstname + " " + lastname;
}