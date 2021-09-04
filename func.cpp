#include "func.h"

unsigned int getValue()
{
    while(true)
    {
        unsigned int value;
        std::cin >> value;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "\nWrong size, please re-enter.\n";
        }
        else
        {
            return value;
        }
    }
}

unsigned int getSimpleNumber(unsigned int number)
{
    for(int i = number; i > 3; i-=2)
    {
        if(i % 3 == 0)
            continue;
        if(searchSimpleNumber(i))
            return i;
    }
    return number;
}

bool searchSimpleNumber(unsigned int number)
{
    unsigned int limit = sqrt(number);
    for(unsigned int i = 5; i <= limit; i+=6)
        if(number % i == 0 || number % (i + 2) == 0)
            return false;
    return true;
}