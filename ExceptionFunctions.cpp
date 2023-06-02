#include "ExceptionFunctions.h"
#include <stdexcept>

void testnum(int num)
{
	if (num < 1)
		throw std::invalid_argument("too small");
	if (num > 10)
		throw std::invalid_argument("too large");

	return;
}

int process1(int num)
{
	return process2(num) / 2;
}

int process2(int num)
{
	return 2 * process3(num);
}

int process3(int num)
{
	testnum(num);

	// If we got here, all is good
	return num;
}