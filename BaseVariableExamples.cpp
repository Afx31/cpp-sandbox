#include <iostream>
#include <string>

int main()
{
    // general use of strings
    std::cout << "Hello World!\n";
    std::cout << "Type your name" << '\n';
    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << '\n';

    // different ways to assign value to variable
    int const i1 = 1;
    std::cout << "i1= " << i1 << '\n';
    int i2; // will initialise as some random negative number
    i2 = 2;
    std::cout << "i2= " << i2 << '\n';
    int const i3(3);
    std::cout << "i3= " << i3 << '\n';
    int const i4{ 4 };
    std::cout << "i4= " << i4 << '\n';

    // auto assigning
    //auto div = i1 / i2;
    //std::cout << "in integer arithmethic, " << i1 << " divided by " << i2 << " is " << div << '\n';

    // casting of the above ^
    auto div = static_cast<double>(i1) / i2;
    std::cout << "in double arithmetic, " << i1 << " divided by " << i2 << " is " << div << '\n';

    // int answer input
    int answer;
    std::cout << "Enter a number\n";
    std::cin >> answer;
    std::cout << "You entered: " << answer << '\n';


    // doubles
    double d1 = 2.2;
    double d2 = i1;
    //int i5 = d1;
    // casting of the above ^
    int i5 = static_cast<int>(d1);
    std::cout << "d1= " << d1 << '\n';
    std::cout << "d2= " << d2 << '\n';
    std::cout << "i5= " << i5 << '\n';

    // characters vs strings
    char c1 = 'a';
    //char c2 = "a"; // "double quotatioon" doesn't work for char
    std::cout << "c1 = " << c1 << '\n';

    // boolean
    bool flag = false;
    std::cout << "flag= " << flag << '\n';
    flag = i1;
    std::cout << "flag= " << flag << '\n';
    flag = d1;
    std::cout << "flag= " << flag << '\n';


    // hover over to see the compiler changing the type with using 'auto' a.k.a var
    auto a1 = 1; // int
    auto a2 = 2.2; // double
    auto a3 = 'c'; // char
    auto a4 = "s"; // const char, fine for literals, don't use often, esp not for calculations
    auto a5 = true; // boolean
    auto a6 = 3L; // long
    auto a7 = 1'000'000'000'000; // long long - the ' are ignored to the compiler
    auto a8 = 0xFF; // int | hexadecimal - 255
    auto a9 = 0b111; // int - 7

    //a1 = a2;
    // casting of the above ^
    a1 = static_cast<int>(a2);

    return 0;
}