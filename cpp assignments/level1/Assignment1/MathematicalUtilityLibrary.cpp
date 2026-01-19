#include "MyMath.h"

/*
Assignment 1.1 — Mathematical Utility Library:
Design and implement your own versions of pow, abs, min, max, gcd, lcm.
Each function must handle invalid input safely.
Include a test harness that validates correctness across 1000 random inputs.
*/

int main()
{
    std::cout << MyMath::pow(2000000000LL, 2ll) << std::endl;
    std::cout << MyMath::lcm(16, 12) << std::endl;
    std::cout << MyMath::gcd(20, 30) << std::endl;
    std::cout << MyMath::abs(-5453894.35) << std::endl;
    std::cout << MyMath::max(16.04, 12.09) << std::endl;
    std::cout << MyMath::min(16, 12) << std::endl;
    return 0;
}