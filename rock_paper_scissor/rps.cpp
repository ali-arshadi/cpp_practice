#include <iostream>

//* rock = 1, paper = 2, scissor = 3
int main()
{
    //* computer pick
    srand((unsigned)time(NULL));
    int CP = 1 + (rand() % 3);

    //* user pick
    int UP;
    std::cout << "rock = 1, paper = 2, scissor = 3.\n";
    std::cout << "PICK ONE!";
    std::cin >> UP;
    std::cout << "\n"
              << "user picked: " << UP << " computer picked: " << CP << "\n";
    //* who wins?
    if (UP == CP)
    {
        std::cout << "it's a tie :(";
    }
    //* user picks rock
    if (UP == 1)
    {
        if (CP == 2)
        {
            std::cout << "ha ha ha ha I win :)";
        }
        if (CP == 3)
        {
            std::cout << "I'll let you win this time :)";
        }
    }
    //* user picks paper
    if (UP == 2)
    {
        if (CP == 1)
        {
            std::cout << "I'll let you win this time :)";
        }
        if (CP == 3)
        {
            std::cout << "ha ha ha ha I win :)";
        }
    }
    //* user picks scissor
    if (UP == 3)
    {
        if (CP == 1)
        {
            std::cout << "ha ha ha ha I win :)";
        }
        if (CP == 2)
        {
            std::cout << "I'll let you win this time :)";
        }
    }
}