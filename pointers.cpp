#include <iostream>

int main()
{

    std::string name = "Ajanta";

    std::string names[] = {"CHOMU", "Ambani", "Shilpa", "Raju"};

    std::cout << *names << '\n';

    std::string *pName = &name;

    std::cout << name << '\n';
    std::cout << *pName << '\n';
    std::cout << pName << '\n';

    return 0;
}