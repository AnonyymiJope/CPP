#include <iostream>

void printString(char *myString)
{
    while (*myString != '\0')
    {
        std::cout << *myString << std::endl;;
        myString++;
    }
}

int main ()
{
    char mystring[] = "kokeilu";

    printString(mystring);

    return 0;
}
