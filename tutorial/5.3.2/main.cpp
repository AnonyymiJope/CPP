#include <iostream>
#include <cstdlib>

enum class Animal {
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH
};

std::string getAnimalName (Animal animal) {
    switch (animal) {
        case Animal::PIG:
            return "pig";
        break;
        case Animal::CHICKEN:
            return "chicken";
        break;
        case Animal::GOAT:
            return "goat";
        break;
        case Animal::CAT:
            return "cat";
        break;
        case Animal::DOG:
            return "dog";
        break;
        case Animal::OSTRICH:
            return "ostrich";
        break;
        default:
            return "unknown";
    }
}

void printNumberOfLegs (Animal animal) {
    std::cout << "A " << getAnimalName(animal) << " has ";

    switch (animal) {
        case Animal::PIG:
            std::cout << "4";
        break;
        case Animal::CHICKEN:
            std::cout << "2";
        break;
        case Animal::GOAT:
            std::cout << "4";
        break;
        case Animal::CAT:
            std::cout << "4";
        break;
        case Animal::DOG:
            std::cout << "4";
        break;
        case Animal::OSTRICH:
            std::cout << "2";
        break;
        default:
            std::cout << "x";
        break;
    }

    std::cout << " legs." << std::endl;
}

int main() {
    printNumberOfLegs(Animal::CAT);
    printNumberOfLegs(Animal::CHICKEN);

    return 0;
}
