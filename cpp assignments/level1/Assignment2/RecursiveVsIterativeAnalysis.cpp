#include <iostream>

int factorial_recursive(int n);
int factorial_iterative(int n);

int main()
{
    std::cout << "Factorial of 5 (Recursive): " << factorial_recursive(5) << std::endl;
    std::cout << "Factorial of 5 (Iterative): " << factorial_iterative(5) << std::endl;
    return 0;
}

int factorial_recursive(int n)
{
    // base case
    if (n <= 1)
    {
        return 1;
    }

    // sp:
    int sp = factorial_recursive(n - 1);
    return n * sp;
}

int factorial_iterative(int n)
{
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        ans *= (i + 1);
    }

    return ans;
}