#include <iostream>
#include <string>
#include <vector>

int main()
{
    // -------------------- If statement --------------------
    int x, y;
    std::cout << "Enter two numbers" << '\n';
    std::cin >> x >> y;

    std::cout << x << " ";
    if (x > y)
    {
        std::cout << "is larger than ";
    }
    else
    {
        std::cout << "is not larger than ";
    }
    std::cout << y << '\n';

    if (x + y > 10)
        std::cout << "thanks for choosing larger numbers!" << '\n';

    // "Immediate If"
    bool temp = true;
    int resultTemp = temp ? 1 : 0;

    // -------------------- While statement --------------------
    int x = 0;
    bool valid = false;

    while (!valid)
    {
        std::cout << "Enter a number between 2 and 100" << '\n';
        std::cin >> x;
        if (x >= 3)
        {
            if (x <= 100)
            {
                valid = true;
            }
        }
    }

    bool prime = true;
    int i = 2;
    
    while (i <= x / i)
    {
        int factor = x / i;
        if (factor * i == x)
        {
            std::cout << "factor found: " << factor << '\n';
            prime = false;
            //break;
        }
        i = i + 1;
    }

    // -------------------- While vs For statement --------------------
    int i = 0;
    while (i < 10)
    {
        std::cout << i << ' ';
        i++;
    }

    std::cout << '\n';

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ' ';
    }

    // ---------------------- For statement with Vectors ----------------------
    std::vector nums = { 5, 8, 11, -2, 3, -7 };
    std::cout << '\n';

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            // skips the negative numbers
            continue;
        }

        std::cout << nums[i] << ' ';
    }

    std::cout << '\n';

    for (auto elem : nums)
    {
        if (elem < 0)
        {
            // skips the negative numbers
            continue;
        }

        std::cout << elem << ' ';
    }

    // ---------------------- Switch statement ----------------------
    int answer;
    std::cout << "Enter a number, 0 to quit" << '\n';
    std::cin >> answer;
    while (answer > 0)
    {
        switch (answer)
        {
        case 1:
            std::cout << "you entered 1" << '\n';
            break;
        case 2:
        case 3:
            std::cout << "you entered 2 or 3" << '\n';
            break;
        case 4:
            std::cout << "you entered 4" << '\n';
            break;
        default:
            std::cout << "you entered something other than 1-4" << '\n';
        }
    }


    return 0;
}