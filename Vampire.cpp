/**********************************************************
**  Program Name: Implementation file for the Vampire class
**  Author:       Charlie Ylijoki
**  Date:         11/4/2018
**  Description:  
**********************************************************/

#include "Vampire.hpp"

using std::cout;
using std::endl;

Vampire::Vampire() : Character()
{
    setArmor(1);
    setStrength(18);
    setType("Vampire");
    setStatus(true);
}

void Vampire::defense(int attack)
{
    Defense = this->rollDefense();

    charm = rand() % 2 + 1;
    if (charm != 1)
    {
        cout << this->getType() << " used charm. No damage taken.\n"
             << this->getType() << " armor points: " << this->getArmor() << endl;
        cout << this->getType() << " strength points: " << this->getStrength() << endl;
    }
    else
    {
        cout << this->getType() << " defends!\n"
             << this->getType() << " generated " << Defense << " defense points on their roll." << endl;

        int damageInflicted;
        if (attack != 100)
        {
            damageInflicted = attack - Defense - this->getArmor();
        }
        else
        {
            damageInflicted = attack;
        }

        if (damageInflicted <= 0)
        {
            cout << this->getType() << " defends without damage.\n"
                 << this->getType() << " armor points: " << this->getArmor() << endl;
            cout << this->getType() << " strength points: " << this->getStrength() << endl;
        }

        else if (damageInflicted > 0 && damageInflicted != 100)
        {
            this->setStrength(this->getStrength() - damageInflicted);
            if (strength > 0)
            {
                cout << this->getType() << " defends and is damaged.\n"
                     << this->getType() << " armor points: " << this->getArmor() << endl;
                cout << this->getType() << " strength points: " << this->getStrength() << endl;
            }
            else if (strength <= 0)
            {
                cout << this->getType() << " has died!\n"
                     << this->getType() << " armor points: " << this->getArmor() << endl;
                cout << this->getType() << " strength points: " << this->getStrength() << endl;

                this->setStatus(false);
            }
        }
        else if (damageInflicted == 100)
        {
            cout << this->getType() << " has been turned to stone by Medusa's glare!\n"
                 << this->getType() << " armor points: " << this->getArmor() << endl;
            cout << this->getType() << " strength points: " << this->getStrength() << endl;

            this->setStatus(false);
        }
    }
}

int Vampire::rollAttack()
{
    return rand() % 12 + 1;
}

int Vampire::rollDefense()
{
    return rand() % 6 + 1;
}

Vampire::~Vampire()
{
}
