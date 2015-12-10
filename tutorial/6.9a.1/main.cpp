#include <iostream>
// //needed for the "numeric_limits"
// #include <limits>

void sortArray(std::string *array, int size)
{
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        std::swap(array[startIndex], array[smallestIndex]);
    }

    std::cout << "Here is your sorted list:" << std::endl;
    for (int index = 0; index < size; ++index)
        std::cout << "Name #" << index + 1 << ": " << array[index] << std::endl; 
}

int main ()
{
    std::cout << "How many names would you like to enter? ";
    int size;
    std::cin >> size;
    // // prevent getline from skipping first line
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string *names = new std::string[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> names[i];
        // // alternative for the above cin
        // std::getline(std::cin, names[i]);
    }

    sortArray(names, size);

    delete[] names;
    names = nullptr;

    return 0;
}
