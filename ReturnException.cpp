#include <iostream>
using std::cout;
using std::cin;
#include "ExceptionFunctions.h"

int main()
{
	int num;
	bool done = false;
	while (!done)
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
		try
		{
			testnum(num);
			//if we got here, all is good
			done = true;
			cout << "Thankyou.\n";
		}
		catch (std::invalid_argument& ex)
		{
			cout << num << " is not between 1 and 10. It is " << ex.what() << ". ";
		}
	}
	//testnumthrow(100);

	done = false;
	while (!done)
	{
		cout << "Enter a number between 1 and 10 ";
		cin >> num;
		try
		{
			int adjusted = process1(num);
			done = true;
			cout << "Thankyou. Adjusted is " << adjusted << '\n';
		}
		catch (std::invalid_argument& ex)
		{
			cout << num << " is not between 1 and 10. It is " << ex.what() << ". ";
		}
	}

}