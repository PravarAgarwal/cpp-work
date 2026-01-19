#include <iostream>
#include <ctime>

int main()
{

    int num;
    int guess;
    int tries = 5;

    srand(time(0));
    num = (rand() % 20) + 1;

    for (int i = 0; i < tries; i++)
    {
        std::cout << "Guess the correct Number: (1-20)\n";
        std::cout << "Your Guess: \n";

        std::cin >> guess;

        if (guess == num)
        {
            std::cout << "YOUR GUESS IS CORRECT !!!!!\n";
            break;
        }
        else
        {
            std::cout << "INCORRECT - TRY AGAIN !!!!\n";
        }
    }
    return 0;
}