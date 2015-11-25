#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter your full name: ";
    std::string myName;
    std::getline(std::cin, myName);

    std::cout << "Enter your age: ";
    int myAge;
    std::cin >> myAge;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "You've lived " <<
        static_cast<float>(myAge) / myName.length() <<
        " years for each letter in your name." << std::endl;

    return 0;
}
