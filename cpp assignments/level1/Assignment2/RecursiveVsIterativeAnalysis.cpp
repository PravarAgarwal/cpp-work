#include <iostream>

int factorial_recursive(int n);
int factorial_iterative(int n);

int fibonacci_recursive(int n);
int fibonacci_iterative(int n);

int main()
{
    std::cout << "Factorial of 5 (Recursive): " << factorial_recursive(5) << std::endl;
    std::cout << "Factorial of 5 (Iterative): " << factorial_iterative(5) << std::endl;
    std::cout << "Fibonacci of 5 (Recursive): " << fibonacci_recursive(10) << std::endl;
    std::cout << "Fibonacci of 5 (Recursive): " << fibonacci_iterative(10) << std::endl;
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

int fibonacci_recursive(int n)
{
    // base case
    if (n <= 1)
    {
        return n;
    }

    // sp
    int sp1 = fibonacci_recursive(n - 1);
    int sp2 = fibonacci_recursive(n - 2);
    return sp1 + sp2;
}

int fibonacci_iterative(int n)
{
    int ans = 0;
    int a = 0, b = 1;

    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }

    return ans;
}