#include <iostream>
#include <string>
#include <algorithm>

/*
Base Conversion Simulator
Write a program that converts numbers between decimal, binary, and hexadecimal.
You must manually compute powers and remainders. Bitwise operators allowed only after first implementation.
Explain time complexity and overflow risks in comments.
*/

std::string convertBinaryToDecimal(std::string n);
std::string convertHexadecimalToDecimal(std::string n);
std::string convertDecimalToBinary(std::string n);
std::string convertDecimalToHexadecimal(std::string n);
int powerFunction(int a, int b);

int main()
{
    char inputType;
    char outputType;

    std::string number;
    std::cout << "***************** Base Conversion Simulator *****************" << '\n';
    std::cout << "Enter the input type (Decimal(D), Hexadecimal(H), Binary(B)): " << '\n';
    std::cin >> inputType;
    std::cout << "Enter the input number: " << '\n';
    std::cin >> number;
    std::cout << "Enter the converted to type (Decimal(D), Hexadecimal(H), Binary(B)): " << '\n';
    std::cin >> outputType;

    if (inputType == 'D')
    {
        if (outputType == 'B')
        {
            std::cout << convertDecimalToBinary(number) << std::endl;
        }
        if (outputType == 'H')
        {
            std::cout << convertDecimalToHexadecimal(number) << std::endl;
        }
    }
    else if (inputType == 'B')
    {
        std::string decimal_value = convertBinaryToDecimal(number);
        if (outputType == 'D')
        {
            std::cout << decimal_value << std::endl;
        }
        else
        {
            std::cout << convertDecimalToHexadecimal(decimal_value) << std::endl;
        }
    }
    else
    {
        // input is (H)
        std::string decimal_value = convertHexadecimalToDecimal(number);
        if (outputType == 'D')
        {
            std::cout << decimal_value << std::endl;
        }
        else
        {
            std::cout << convertDecimalToBinary(decimal_value) << std::endl;
        }
    }

    std::cout << "*************************************************************" << '\n';
    return 0;
}

std::string convertBinaryToDecimal(std::string n)
{
    int num;
    for (int i = 0; i < n.size(); i++)
    {
        int c = n[i] - '0';
        num += c * powerFunction(2, n.size() - i - 1);
    }
    return std::to_string(num);
}
std::string convertHexadecimalToDecimal(std::string n)
{
}
std::string convertDecimalToBinary(std::string n)
{
    int num = std::stoi(n);
    std::string reversed_ans;
    int binary_size = 0;

    while (num > 0)
    {
        int rem = num % 2;
        reversed_ans += ('0' + rem);
        binary_size++;
        num /= 2;
    }

    std::reverse(reversed_ans.begin(), reversed_ans.end());

    return reversed_ans;
}
std::string convertDecimalToHexadecimal(std::string n)
{
}

int powerFunction(int a, int b)
{
    // returns a to the power of b
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}