#include <iostream>
using std::cout;
using std::cin;
#include "CodeFunctions.h"

int main()
{
	int num;
	Error numcheck = Error::TooSmall;  //have to initialize to some non-success value; not great
	while (numcheck != Error::Success)
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
		numcheck = testnum(num);
		if (numcheck == Error::Success)
		{
			cout << "Thankyou.\n";
		}
		else
		{
			cout << num << " is not between 1 and 10. It is ";
			if (numcheck == Error::TooSmall)
			{
				cout << "too small. ";
			}
			if (numcheck == Error::TooLarge)
			{
				cout << "too large. ";
			}
		}
	}
	testnum(100);

	int adjusted = 0;
	numcheck = Error::TooSmall;
	while (numcheck != Error::Success)
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
		numcheck = process1(num, adjusted);
		if (numcheck == Error::Success)
		{
			cout << "Thankyou. Adjusted is " << adjusted << '\n';
		}
		else
		{
			cout << num << " is not between 1 and 10. It is ";
			if (numcheck == Error::TooSmall)
			{
				cout << "too small. ";
			}
			if (numcheck == Error::TooLarge)
			{
				cout << "too large. ";
			}
		}
	}

}

