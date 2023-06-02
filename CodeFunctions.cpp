#include <iostream>
using std::cout;
using std::cin;
#include<string>
#include "CodeFunctions.h"
using std::string;

int main()
{
    // Don't need to use the namespace std:: anymore
    cout << "Type your name" << '\n';
    string name;
    cin >> name;
    cout << "Hello " << name << '\n';

    return 0;
}

Error testnum(int num)
{
    if (num < 1)
        return Error::TooSmall;
    if (num > 10)
        return Error::TooLarge;

    return Error::Success;
}

Error process1(int num, int& answer)
{
    Error e = process2(num, answer);
    if (e == Error::Success)
        answer /= 2;

    return e;
}

Error process2(int num, int& answer)
{
    Error e = process3(num, answer);
    if (e == Error::Success)
        answer *= 2;

    return e;
}

Error process3(int num, int& answer)
{
    Error e = testnum(num);
    if (e == Error::Success)
        answer = num;

    return e;
}