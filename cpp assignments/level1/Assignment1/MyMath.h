#ifndef MYMATH_H // Header Guard: Prevents the file from being included twice
#define MYMATH_H

#include <iostream>
#include <limits>

namespace MyMath
{

    // Template Function: Must be fully defined in the header
    template <typename T, typename U>
    T pow(T a, U b)
    {
        T ans = 1;
        for (U i = 0; i < b; i++)
        {
            if (ans > 1 && a > std::numeric_limits<T>::max() / ans)
            {
                std::cout << "Overflow Achieved !!!" << std::endl;
                return 0; // Overflow handled
            }
            ans *= a;
        }
        return ans;
    }

    template <typename T>
    T abs(T n)
    {
        return (n > 0) ? n : -n;
    }

    template <typename T>
    T min(T a, T b)
    {
        return (a > b) ? b : a;
    }

    template <typename T>
    T max(T a, T b)
    {
        return (a > b) ? a : b;
    }

    template <typename T>
    T gcd(T a, T b)
    {
        T ans = 1;
        for (long long i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                if (b % i == 0)
                {
                    ans = (ans > i) ? ans : i;
                }
            }
        }
        return ans;
    }
    template <typename T>
    T lcm(T a, T b)
    {
        return abs(a * b) / gcd(a, b);
    }
}

// ...but for small libraries, it's common to put the definitions
// at the bottom of the same header file or keep them inline.

// inline long long MyMath::abs(long long n)
// {
//     return (n < 0) ? -n : n;
// }

// inline long long MyMath::gcd(long long a, long long b)
// {
//     while (b != 0)
//     {
//         a %= b;
//         std::swap(a, b);
//     }
//     return a;
// }

#endif