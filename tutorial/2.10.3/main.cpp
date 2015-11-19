#include <iostream>

double getNumber()
{
    std::cout << "Enter a floating point number: ";
    double i;
    std::cin >> i;
    return i;
}

char oper()
{
    std::cout << "Select mathematical operation ( '+', '-', '*', or '/' ): ";
    char p;
    std::cin >> p;
    return p;
}

double calculator(double x, double y, char z)
{
    if (z == '+')
        std::cout << x + y << std::endl;
    else if (z == '-')
        std::cout << x - y << std::endl;
    else if (z == '*')
        std::cout << x * y << std::endl;
    else if (z == '/')
        std::cout << x / y << std::endl;
}

int main()
{
    double x = getNumber();
    double y = getNumber();
    char z = oper();

    calculator(x, y, z);

    return 0;
}
