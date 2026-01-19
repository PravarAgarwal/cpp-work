#include <iostream>
#include <string>

int main()
{
    int number = 0;

    do
    {
        std::cout << "enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number;
    return 0;
}