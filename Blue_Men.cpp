/**********************************************************
**  Program Name:  Implementation file for the Blue Men class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:
**********************************************************/

#include "Blue_Men.hpp"

Blue_Men::Blue_Men() : Character()
{
    setArmor(3);
    setStrength(12);
    setType("Blue Men");
    setStatus(true);
}

int Blue_Men::rollAttack()
{
    int roll_1 = rand() % 10 + 1;
    int roll_2 = rand() % 10 + 1;

    return roll_1 + roll_2;
}

int Blue_Men::rollDefense()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;
    int roll_3 = rand() % 6 + 1;

    if (this->getStrength() > 8)
    {
        return roll_1 + roll_2 + roll_3;
    }
    else if (this->getStrength() <= 8 && this->getStrength() > 4)
    {
        return roll_1 + roll_2;
    }
    else if (this->getStrength() <= 4 && this->getStrength() > 0)
    {
        return roll_1;
    }
    return roll_1 + roll_2 + roll_3;
}

Blue_Men::~Blue_Men()
{
}
