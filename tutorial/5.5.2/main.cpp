#include <iostream>

int main()
{
    char letter = 'a';

    while (letter <= 'z')
    {
        std::cout << letter << " - ASCII: "<< static_cast<int>(letter) << std::endl;
        ++letter;
    }

    return 0;
}
