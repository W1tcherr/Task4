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
    if(number % 2 == 0)
    {
        number -= 1;
    }
    else
    {
        number -= 2;
    }
    while(true)
    {
        if(searchSimpleNumber(number) == true)
            break;
        number-=2;
    }
    return number;
}
bool searchSimpleNumber(unsigned int number)
{
    if(number <= 3)
        return number >= 1;
    else if(number % 3 == 0)
        return false;
    unsigned int limit = sqrt(number);
    for(unsigned int i = 5; i <= limit; i+=6)
        if(number % i == 0 || number % (i + 2) == 0)
            return false;
    return true;
}