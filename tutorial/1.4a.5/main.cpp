#include <iostream>
#include "double.h"

int main()
{
    int myNumber (0);

    std::cout << "Enter a number: ";
    std::cin >> myNumber;
    std::cout << doubleNumber(myNumber) << std::endl;

    return 0;
}
