#include <iostream>
#include "func.h"

int main() {
    std::cout << "Enter number: ";
    unsigned int num = getValue();
    if(num == 1 || num == 0)
        std::cout << "\nThere is no prime number less than entered." << std::endl;
    else
        std::cout << "\nLargest prime less " << num << ": " << getSimpleNumber(num) << std::endl;
    return 0;
}