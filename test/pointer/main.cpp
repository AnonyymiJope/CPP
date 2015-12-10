#include <iostream>

int main()
{
    int value = 5;
    int *ptr = &value; // assign address of value to ptr

    std::cout << &value << std::endl; // print the address of variable value
    std::cout << ptr << std::endl; // print the address that ptr is holding

//------------------------------

    int array[5] = { 9, 7, 5, 3, 1 };

    std::cout << "The array has address: " << array << '\n';
    std::cout << "The array size: " << sizeof(array) << '\n';

    std::cout << "Element 0 has address: " << &array[0] << '\n';
    std::cout << "size: " << sizeof(array[0]) << '\n';
    std::cout << "Element 0 has address: " << &array[1] << '\n';
    std::cout << "Element 0 has address: " << &array[2] << '\n';
    std::cout << "Element 0 has address: " << &array[3] << '\n';
    std::cout << "Element 0 has address: " << &array[4] << '\n';

    return 0;
}
