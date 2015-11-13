#include <iostream>

int readNumber()
{
    std::cout << "Give a number: ";
    int x (0);
    std::cin >> x;
    return x;
}

void writeAnswer(int y)
{
    std::cout << "The result is: " << y << std::endl;
}
