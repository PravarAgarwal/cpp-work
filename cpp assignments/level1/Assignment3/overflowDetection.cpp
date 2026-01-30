#include <iostream>
#include <climits>

/*
Assignment 1.3 — Overflow Detection:
Write safe addition and multiplication functions that detect signed integer overflow without using larger data types.

*/

int safeAddition(int a, int b);
int safeMultiplication(int a, int b);

int main()
{

    std::cout << INT_MIN << std::endl;
    std::cout << INT_MAX << std::endl;

    std::cout << safeAddition(1073741826, -1073741829) << std::endl;
    return 0;
}

int safeAddition(int a, int b)
{
    if (a >= (INT_MAX / 2) && b >= (INT_MAX / 2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else if (a <= (INT_MIN / 2) && b <= (INT_MIN / 2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else
    {
        return a + b;
    }
}
int safeMultiplication(int a, int b)
{
    if (a >= (INT_MAX / 2) && (b >= 2 || b <= -2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else if (b >= (INT_MAX / 2) && (a >= 2 || a <= -2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else if (a <= (INT_MIN / 2) && (b >= 2 || b <= -2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else if (b <= (INT_MIN / 2) && (a >= 2 || a <= -2))
    {
        std::cout << "Overflow present !!!!" << std::endl;
        return 0;
    }
    else
    {
        return a * b;
    }
}
