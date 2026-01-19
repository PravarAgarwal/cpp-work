#include <iostream>
#include <cmath>

int main()
{

    double l;
    double b;
    double h;

    std::cout << "Length: ";
    std::cin >> l;

    std::cout << "Breadth: ";
    std::cin >> b;

    h = pow((l * l) + (b * b), 0.5);
    std::cout << "Hypoteneous " << h;
    return 0;
}