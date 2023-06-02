#include <iostream>
using std::cout;
using std::cin;
#include "OptionalFunctions.h"

int main()
{
	int num;
	std::optional<int> adjusted;
	while (!adjusted)
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
		adjusted = process1(num);
		if (adjusted)
		{
			cout << "Thankyou. Adjusted is " << adjusted.value() << '\n';
		}
		else
		{
			cout << num << " is not between 1 and 10. ";
		}
	}

}
