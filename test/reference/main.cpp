#include <iostream>

int main ()
{
    int value1 = 5;
    int value2 = 6;
    int &ref = value1;

    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << ref << std::endl;

    const int &ref1 = value1;
    ref1 = 6;
    std::cout << ref1 << std::endl;

    ref = value2;
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << ref << std::endl;

    return 0;
}
