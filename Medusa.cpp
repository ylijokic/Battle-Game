/**********************************************************
**  Program Name:  Implementation file for Medusa class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description: 
**********************************************************/

#include "Medusa.hpp"

using std::cout;
using std::endl;

Medusa::Medusa() : Character()
{
    setArmor(3);
    setStrength(8);
    setType("Medusa");
    setStatus(true);
}

int Medusa::attack()
{
    Attack = this->rollAttack();

    cout << this->getType() << " attacks!\n"
         << this->getType() << " generated " << Attack << " points on their roll." << endl;

    if (Attack == 12)
    {
        cout << "Medusa used glare!" << endl;
        glare = 100;
        return glare;
    }
    return Attack;
}
int Medusa::rollAttack()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;

    return roll_1 + roll_2;
}

int Medusa::rollDefense()
{
    return rand() % 6 + 1;
}

Medusa::~Medusa()
{
}
