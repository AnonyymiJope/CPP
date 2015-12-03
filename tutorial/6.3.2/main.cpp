#include <iostream>

int main ()
{
    int myNumber;

    do
    {
        std::cout << "Enter a number between 1-9: ";
        std::cin >> myNumber;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    }
    while (myNumber < 1 || myNumber > 9);

    const int arrayLength(9);
    int array[arrayLength] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    for (int index = 0; index < (arrayLength); ++index)
    {
        std::cout << array[index] << " ";
    }
    std::cout << std::endl;

    for (int index = 0; index < (arrayLength); ++index)
    {
        if (array[index] == myNumber)
        {
            std::cout << "Number '" << myNumber <<
                "' matches array index[" << index << "]" << std::endl;
            break;
        }
    }

    return 0;
}
