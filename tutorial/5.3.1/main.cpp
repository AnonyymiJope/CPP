#include <iostream>
#include <cstdlib>

double calculate(int x, int y, char oper) {
    switch (oper) {
        case '+':
            return x + y;
        break;
        case '-':
            return x - y;
        break;
        case '/':
            return x / y;
        break;
        case '*':
            return x * y;
        break;
        default:
            std::cout << "ERROR\n";
            exit(0);
        break;
    }
}

int main() {
    std::cout << "Enter a digit: ";
    int x;
    std::cin >> x;
    std::cout << "Enter another digit: ";
    int y;
    std::cin >> y;
    std::cout << "Enter operator: ";
    char oper;
    std::cin >> oper;

    std::cout << calculate(x, y, oper) << std::endl;

    return 0;
}
