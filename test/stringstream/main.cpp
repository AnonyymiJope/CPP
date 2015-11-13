#include <iostream>
#include <string>
#include <sstream>

int main ()
{
    std::string myStr;
    float price=0;
    int quantity=0;

    std::cout << "Enter price: ";
    std::getline (std::cin,myStr);
    std::stringstream(myStr) >> price;
    std::cout << "Enter quantity: ";
    std::getline (std::cin,myStr);
    std::stringstream(myStr) >> quantity;
    std::cout << "Total price: " << price*quantity << std::endl;

    return 0;
}
