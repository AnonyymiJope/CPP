#include <iostream>
#include <vector>

void sortNames(std::string array[], int arraySize)
{
    for (int index = 0; index < arraySize; ++index)
    {
        int smallestIndex = index;

        for (int currentIndex = index; currentIndex < arraySize; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }

        std::swap(array[index], array[smallestIndex]);
    }
}

int main ()
{
    std::cout << "How many names would you like to enter?: ";
    int numberOfNames;
    std::cin >> numberOfNames;

    // std::vector<std::string> names {};
    // names.resize(numberOfNames);
    std::string *names= new std::string[numberOfNames] {};

    for (int index = 0; index < numberOfNames; ++index)
    {
        std::cout << "Enter name #" << index << ": ";
        std::cin >> names[index];
    }

    sortNames(names, numberOfNames);

    for (int index = 0; index < numberOfNames; ++index)
    {
        std::cout << "Name #" << index << ": " << names[index] << std::endl;
    }

    delete[] names;
    return 0;
}
