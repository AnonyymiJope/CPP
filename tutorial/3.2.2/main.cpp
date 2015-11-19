#include <iostream>

bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    if ( isEven(x) )
	std::cout << "The integer is even." << std::endl;
    else
	std::cout << "The integer is odd." << std::endl;

    return 0;
}
