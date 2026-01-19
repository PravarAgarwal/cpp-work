#include <iostream>
using std::cout;

int main()
{
    // if statement, if the age is less than 18, then not passed, otherwise the person is passed
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;

    if (age < 18)
    {
        cout << "NO !!!!";
    }
    else
    {
        cout << "YES !!!!";
    }

    return 0;
}