#include <iostream>
using std::cout;
using std::cin;

#include "Utility.h"

int main()
{
	int value;
	cout << "Enter a number" << '\n';
	cin >> value;

	if (IsPrime(value))
		cout << value << " is prime" << '\n';
	else
		cout << value << " is not prime" << '\n';

	cout << value << "+2 is ";

	if (!Is2MorePrime(value))
	{
		cout << "not ";
	}
	cout << "prime" << '\n';
	cout << value << '\n';
}