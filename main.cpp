#include <iostream>
#include "func.h"

int main() {
    std::cout << "Enter number: ";
    unsigned int num = getValue();
    if(num == 1 || num == 0)
        std::cout << "\nThere is no prime number less than entered." << std::endl;
    else
    {
        if(num % 2 == 0)
            std::cout << "\nLargest prime less " << num << ": " << getSimpleNumber(num-1) << std::endl;
        else
            std::cout << "\nLargest prime less " << num << ": " << getSimpleNumber(num-2) << std::endl;
    }
    return 0;
}