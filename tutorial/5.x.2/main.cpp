#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

bool playAgain ()
{
    std::cout << "Would You like to play again (y/n)? ";
    char again;
    std::cin >> again;

    switch (again)
    {
        case 'y':
            return true;
            break;
        case 'n':
            return false;
            break;
        default:
            playAgain();
            break;
    }
}

void makeGuess (int randomNumber)
{
    std::cout << "Let's play a game. ";
    std::cout << "I'm thinking of a number. ";
    std::cout << "You have 7 tries to guess what it is. ";
    std::cout << std::endl;

    int count(1);
    do
    {
        std::cout << "Guess #" << count << ": ";
        int guess;
        std::cin >> guess;

        if (guess == randomNumber)
        {
            std::cout << "Correct! You win!" << std::endl;
            break;
        }

        if (guess > randomNumber)
        {
            std::cout << "Your guess is too high" << std::endl;
        }

        if (guess < randomNumber)
        {
            std::cout << "Your guess is too low" << std::endl;
        }

        ++count;
    }
    while (count <= 7);

    if (count > 7)
    {
        std::cout << "Sorry, you lose. ";
        std::cout << "The correct number was: ";
        std::cout << randomNumber << std::endl;
    }

    if (playAgain() == true)
    {
        makeGuess(randomNumber);
    }
    else
    {
        std::cout << "Thank You for playing." << std::endl;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int randomNumber = getRandomNumber(1, 100);
    makeGuess(randomNumber);

    return 0;
}
