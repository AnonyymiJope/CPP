#include <iostream>

int checker(int x, int y)
{
    if (x >= y)
    {
        std::cout << "1" ;
        x = x - y;
    }
    else
    {
        std::cout << "0";
    }
    return x;
}


int main()
{
    std::cout << "Enter a number between 0 and 255: ";
    int x;
    std::cin >> x;

    x = checker(x, 128);
    x = checker(x, 64);
    x = checker(x, 32);
    x = checker(x, 16);

    std::cout << " ";

    x = checker(x, 8);
    x = checker(x, 4);
    x = checker(x, 2);
    x = checker(x, 1);
    std::cout << std::endl;

    return 0;
}
