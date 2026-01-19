#include <iostream>
using std::cin;
using std::cout;

int main()
{

    cout << "********** CALCULATOR APP **********" << '\n';

    while (true)
    {

        char op;
        cout << "Enter the operation that you want to perform: " << '\n';
        cin >> op;

        if (op == '0')
        {
            break;
        }

        double first;
        double second;
        double result;

        cout << "Enter the first number: " << '\n';
        cin >> first;
        cout << "Enter the second number: " << '\n';
        cin >> second;

        switch (op)
        {
        case '+':
            result = first + second;
            cout << "The addition result is " << result << '\n';
            break;

        case '-':
            result = first - second;
            cout << "The subtraction result is " << result << '\n';
            break;

        case '*':
            result = first * second;
            cout << "The multiplicaton result is " << result << '\n';
            break;

        case '/':
            result = first / second;
            cout << "The division result is " << result << '\n';
            break;

        default:
            cout << "wrong operation is asked" << '\n';
            break;
        }
    }
    cout << "************************************" << '\n';

    return 0;
}