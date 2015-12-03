#include <iostream>

void sumTo(int x)
{
    int sum = 0;
    for (int y = 1; y <= x; ++y)
        sum += y;

    std::cout << sum << std::endl;
}

int main ()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    sumTo(x);

    return 0;
}
