/**********************************************************
**  Program Name:  Implementation file for Barbarian class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:
**********************************************************/

#include "Barbarian.hpp"

using std::cout;
using std::endl;

Barbarian::Barbarian() : Character()
{
    setArmor(0);
    setStrength(12);
    setType("Barbarian");
    setStatus(true);
}

int Barbarian::rollAttack()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;

    return roll_1 + roll_2;
}

int Barbarian::rollDefense()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;

    return roll_1 + roll_2;
}

Barbarian::~Barbarian()
{
}