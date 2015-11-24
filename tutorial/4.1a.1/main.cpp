#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    std::cout << "Enter a larger integer: ";
    int y;
    std::cin >> y;

    if (y <  x)
    {
        std::cout << "Swapping the values" << std::endl;
        int z = x;
        x = y;
        y = z;
        // "z" dies here
    }

    std::cout << "The smaller value is: " << x << std::endl;
    std::cout << "The larger value is: " << y << std::endl;

    return 0;
    // "x" and "y" dies here
}
