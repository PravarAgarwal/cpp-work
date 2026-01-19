#include <iostream>

class User
{
private:
    int password;

public:
    void login();
};

int main()
{
    std::cout << "Hello Ji" << std::endl;
    std::cout << "hI hOW ARE YOU" << std ::endl;

    int x = 5;
    int y = 10;

    std::cout << "the sum of the variables {x} and {y} is :" << x + y << "\n";
    std::cout << "the product of the variables {X} and {y} is: " << x * y;
    return 0;
}