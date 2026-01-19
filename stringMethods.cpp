#include <iostream>
#include <string>

int main()
{
    // we'll be testing certain string methods
    std::string firstname;
    std::string lastname;
    int age;

    std::cout << "Enter your age:";
    std::cin >> age;

    std::cin.ignore();

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstname);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastname);

    std::string name = firstname.append(lastname);
    std::cout << "Length of name: " << name.length() << std::endl;
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << std::endl;

    std::cout << name.at(0);

    return 0;
}