#include "Tweeter.h"
#include <iostream>
#include <string>

Tweeter::Tweeter(std::string first, std::string last, int arbitrary, std::string handle)
	: Person(first, last, arbitrary), twitterhandle(handle)
{
	std::cout << "constructing tweeter" << twitterhandle << '\n';
}

Tweeter::~Tweeter()
{
	std::cout << "destructing tweeter" << twitterhandle << '\n';
}