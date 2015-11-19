#include <iostream>

int main()
{
    std::cout << "Enter a single digit : ";
    int x;
    std::cin >> x;

    bool prime(false);

    if (x == 2 || x == 3 || x == 5 || x == 7)
        prime = true;

    if (prime)
        std::cout << "The digit is prime" << std::endl;
    else
        std::cout << "The digit is not prime" << std::endl;
}
