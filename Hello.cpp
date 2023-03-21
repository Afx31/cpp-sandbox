#include <iostream>
using std::cout;
using std::cin;
#include<string>
using std::string;
//using namespace std; //this works, but not recommended

int main()
{
    // Don't need to use the namespace std:: anymore
    cout << "Type your name" << '\n';
    string name;
    cin >> name;
    cout << "Hello " << name << '\n';

    return 0;
}