#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void showChoice(char choice);
std::string declareWinner(char user, char computer);

int main()
{
    std::cout << "***********Stone Paper Scissor Game***********" << '\n';

    char user = userChoice();
    showChoice(user);
    char computer = computerChoice();
    showChoice(computer);

    std::string winner = declareWinner(user, computer);
    std::cout << "winner is: " << winner << '\n';

    std::cout << "**********************************************";
    return 0;
}

char userChoice()
{
    char user;
    do
    {
        std::cout << "Enter your choice (rock, paper, scissor): " << "\n";
        std::cout << "r for rock" << "\n";
        std::cout << "p for paper" << "\n";
        std::cout << "s for scissors" << "\n";
        std::cin >> user;
    } while (user != 'r' && user != 'p' && user != 's');

    return user;
}
char computerChoice()
{
    srand(time(0));

    char choice;
    // we'll generate 3 random numbers and assign each one with a value
    int num = rand() % 3 + 1;
    std::cout << "Random Number: " << num << '\n';

    switch (num)
    {
    case 1:
        choice = 'r';
        break;
    case 2:
        choice = 'p';
        break;
    case 3:
        choice = 's';
        break;

    default:
        break;
    }
    return choice;
}
void showChoice(char choice)
{
    // we'll use switch case here
    switch (choice)
    {
    case 'r':
        std::cout << "Choice is ROCK" << '\n';
        break;
    case 'p':
        std::cout << "Choice is PAPER" << '\n';
        break;
    case 's':
        std::cout << "Choice is SCISSORS" << '\n';
        break;
    default:
        break;
    }
}
std::string declareWinner(char user, char computer)
{
    switch (user)
    {
    case 'r':
        if (computer == 'r')
        {
            return "TIE";
        }
        else if (computer == 's')
        {
            return "USER";
        }
        else
        {
            return "COMPUTER";
        }

    case 'p':
        if (computer == 'p')
        {
            return "TIE";
        }
        else if (computer == 's')
        {
            return "COMPUTER";
        }
        else
        {
            return "USER";
        }
    case 's':
        if (computer == 's')
        {
            return "TIE";
        }
        else if (computer == 'r')
        {
            return "COMPUTER";
        }
        else
        {
            return "USER";
        }
        break;

    default:
        break;
    }
    return "";
}