#include <iostream>

typedef std::string String;

int main()
{
    // printing the area of a circle

    int radius = 12;
    const double PI = 3.14;
    double area = PI * radius * radius;
    String introduction = "My name is Pravar Agarwal";

    std::cout << "Area of the circle with radius " << radius << " cm is " << area << " cm^2" << "\n";
    std::cout << "Introduction: " << introduction << "\n";

    std::cout << "**************** Using the terniary operator *****************" << '\n';

    bool hungry = true;
    std::string stmt;
    hungry == true ? stmt = "the person is hungry" : stmt = "The person is not hungry";

    std::cout << stmt;

    return 0;
}