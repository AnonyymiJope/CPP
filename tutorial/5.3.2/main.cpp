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
        case 'Animal::PIG':
            return "pig";
        break;
        case 'Animal::CHICKEN':
            return "chicken";
        break;
        case 'Animal::GOAT':
            return "goat;
        break;
        case 'Animal::CAT':
            return "cat";
        break;
        case 'Animal::DOG':
            return "dog";
        break;
        case 'Animal::OSTRICH':
            return "ostrich";
        break;
        default:
            std::cout << "ERROR\n";
            exit(0);
        break;
    }
}

int printNumberOfLegs (std::string getAnimalName) {
    switch (animal) {
        case 'pig':
            return 4;
        break;
        case 'chicken':
            return 2;
        break;
        case 'goat':
            return 4;
        break;
        case 'cat':
            return 4;
        break;
        case 'dog':
            return 4;
        break;
        case 'ostrich':
            return 2;
        break;
        default:
            std::cout << "ERROR\n";
            exit(0);
        break;
    }
}

int main() {
    Animal cat = Animal::CAT;
    Animal chicken = Animal::CAT;

    std::cout << "A " << cat << " has " << 
        printNumberOfLegs(cat) << " legs." << std::endl;

    return 0;
}
