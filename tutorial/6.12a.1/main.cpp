#include <iostream>

int main ()
{
    std::string names[] { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

    std::cout << "Enter a name: ";
    std::string userName;
    std::cin >> userName;

    bool exists(false);
    for (std::string &name : names)
    {
        if (name == userName)
        {
            exists = true;
            break;
        }
    }

    if (exists)
    {
        std::cout << userName << " was found." << std::endl;
    }
    else
    {
        std::cout << userName << " was note found." << std::endl;
    }

    return 0;
}
