#include <iostream>

/*
Assignment 1.2 — Recursive vs Iterative Analysis:
Implement factorial, Fibonacci, and power functions using both recursion and iteration.
Measure stack depth, execution time, and explain tradeoffs.
Explicitly identify tail recursion opportunities.
*/

int factorial_recursive(int n);
int factorial_iterative(int n);

int fibonacci_recursive(int n);
int fibonacci_iterative(int n);

long long power_recursive(int a, int b);
long long power_iterative(int a, int b);

int main()
{
    std::cout << "Factorial (Recursive): " << factorial_recursive(5) << std::endl;
    std::cout << "Factorial (Iterative): " << factorial_iterative(5) << std::endl;
    std::cout << "Fibonacci (Recursive): " << fibonacci_recursive(10) << std::endl;
    std::cout << "Fibonacci (Recursive): " << fibonacci_iterative(10) << std::endl;
    std::cout << "Power function (Iterative): " << power_iterative(2, 3) << std::endl;
    std::cout << "Power function (Recursive): " << power_recursive(2, 3) << std::endl;

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

long long power_recursive(int a, int b)
{
    // base case:
    if (b == 1)
    {
        return a;
    }
    // sp
    long long sp = power_recursive(a, b - 1);
    return a * sp;
}
long long power_iterative(int a, int b)
{
    long long ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }

    return ans;
}