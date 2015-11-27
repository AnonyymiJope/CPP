#include <iostream>

struct Fraction {
    int numerator = 0;
    int denominator = 0;
};

void multiply(Fraction f1, Fraction f2) {
    std::cout <<
        static_cast<double>(f1.numerator * f2.numerator) /
        static_cast<double>(f1.denominator * f2.denominator)
        << std::endl;
}

int main() {
    Fraction fraction1;

    std::cout << "Enter numerator for fraction 1: ";
    std::cin >> fraction1.numerator;
    std::cout << "Enter denominator for fraction 1: ";
    std::cin >> fraction1.denominator;

    Fraction fraction2;

    std::cout << "Enter numerator for fraction 2: ";
    std::cin >> fraction2.numerator;
    std::cout << "Enter denominator for fraction 2: ";
    std::cin >> fraction2.denominator;

    multiply(fraction1, fraction2);

    return 0;
}
