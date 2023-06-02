#include "OptionalFunctions.h"
bool testnum(int num)
{
	if (num < 1)
	{
		return false;
	}
	if (num > 10)
	{
		return false;
	}

	return true;
}

std::optional<int> process1(int num)
{
	auto answer = process2(num);
	if (answer)
	{
		answer.value() /= 2;
	}
	return answer;
}

std::optional<int> process2(int num)
{
	auto answer = process3(num);
	if (answer)
	{
		answer.value() *= 2;
	}
	return answer;
}

std::optional<int> process3(int num)
{
	if (testnum(num))
	{
		return num;
	}
	else
	{
		return std::nullopt;
	}
}

