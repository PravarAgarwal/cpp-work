#include <iostream>
int getNumberOfDigits(int n);
int getSumOfDigits(int n);
bool getIsPalindrome(int n);
bool getIsPrime(int n);
bool getIsPrimeOptimized(int n);

int main()
{
    std::cout << "********** Program Entry Point **********" << '\n';

    long long number;
    std::cin >> number;
    std::cout << "Entered Number is: " << number << '\n';

    // print the number of digits:
    int numberOfDigits = getNumberOfDigits(number);
    std::cout << "Number of Digits: " << numberOfDigits << '\n';

    // print sum of digits
    int sumOfDigits = getSumOfDigits(number);
    std::cout << "Sum of Digits: " << sumOfDigits << '\n';

    // print if number is palindrome or not
    bool isPalindrome = getIsPalindrome(number);
    std::cout << "Number is Palindrome (True/False): " << isPalindrome << '\n';

    // print if number is prime or not
    if (number == 1)
    {
        std::cout << "1 is neither prime nor composite" << '\n';
    }
    else
    {
        bool isPrime = getIsPrime(number);
        bool isPrimeOptimized = getIsPrimeOptimized(number);
        std::cout << "Number is Prime (True/False): " << isPrime << '\n';
        std::cout << "Number is Prime (Optimized Code) (True/False): " << isPrimeOptimized << '\n';
    }

    std::cout << "*****************************************";
    return 0;
}

int getNumberOfDigits(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int numberOfDigits = 0;
    while (n > 0)
    {
        n /= 10;
        numberOfDigits++;
    }

    return numberOfDigits;
}
int getSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}
bool getIsPalindrome(int n)
{
    int copy = n;
    long long newNum = 0;
    int power = getNumberOfDigits(n) - 1;

    while (copy > 0)
    {
        int digit = copy % 10;
        // calculating the factor of 10
        long long factor10 = 1;
        for (int i = 0; i < power; i++)
        {
            factor10 *= 10;
        }
        newNum += factor10 * digit;

        copy /= 10;
        power--;
    }

    if (n == newNum)
    {
        return true;
    }
    return false;
}
bool getIsPrime(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (count > 1)
        {
            return false;
        }
    }

    return true;
}

bool getIsPrimeOptimized(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return false;

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (long long i = 5; i * i < n; i += 5)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}