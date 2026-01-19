#include <iostream>

void swapString(std::string &x, std::string &y);
void swapInt(int &a, int &b);

int main()
{
    std::string x = "Marshal";
    std::string y = "JBL";

    swapString(x, y);
    std::cout << "X : " << x << '\n';
    std::cout << "Y : " << y << '\n';

    int a = 11;
    int b = 39;
    swapInt(a, b);

    std::cout << "A : " << a << '\n';
    std::cout << "B : " << b << '\n';

    return 0;
}

void swapString(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

void swapInt(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}