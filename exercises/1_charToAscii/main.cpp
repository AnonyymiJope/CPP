#include <iostream>

int main()
{
    // Allocate a buffer to hold user input
    char buf[255] = { 0 };

    // We only want one letter
    std::cout << "Enter a letter: ";
    std::cin >> buf[0];

//    // Pause and wait for user input
//    char chIgnore;
//    std::cout << "Pausing" << std::endl;
//    std::cin >> chIgnore;
//
    std::cout << "Character:  " << buf[0] << std::endl;
    std::cout << "    ASCII:  " << int(buf[0]) << std::endl;

    return 0;
}
