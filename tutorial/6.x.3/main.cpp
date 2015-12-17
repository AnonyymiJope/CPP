#include <iostream>

void swapValue(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main ()
{
    int x = 6;
    int y = 8;
    std::cout << x << ", " << y << std::endl;

    swapValue(x, y);
    std::cout << x << ", " << y << std::endl;

    return 0;
}
