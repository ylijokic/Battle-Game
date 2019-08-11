/**********************************************************
**  Program Name:  Implementation file for Harry Potter class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:   
**********************************************************/

#include "Harry_Potter.hpp"

using std::cout;
using std::endl;

Harry_Potter::Harry_Potter() : Character()
{
    setArmor(0);
    setStrength(10);
    setType("Harry Potter");
    setStatus(true);
}

void Harry_Potter::defense(int attack)
{
    Defense = this->rollDefense();

    cout << this->getType() << " defends!\n"
         << this->getType() << " generated " << Defense << " defense points on their roll." << endl;

    int damageInflicted = attack - Defense - this->getArmor();

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
            cout << this->getType() << " is damaged.\n"
                 << this->getType() << " armor points: " << this->getArmor() << endl;
            cout << this->getType() << " strength points: " << this->getStrength() << endl;
        }
        else if (strength <= 0 && hogwarts == true)
        {
            cout << this->getType() << " has died!" << endl;
            cout << this->getType() << " uses Hogwarts to regenerate!" << endl;
            this->setStrength(20);

            hogwarts = false;

            cout << this->getType() << " armor points: " << this->getArmor() << endl;
            cout << this->getType() << " strength points: " << this->getStrength() << endl;
        }
        else if (strength <= 0 && hogwarts == false)
        {
            cout << this->getType() << " has died!" << endl;
            cout << this->getType() << " armor points: " << this->getArmor() << endl;
            cout << this->getType() << " strength points: " << this->getStrength() << endl;

            this->setStatus(false);
        }
    }
    else if (damageInflicted == 100 && hogwarts == true)
    {
        cout << this->getType() << " has been turned to stone by Medusa's glare!" << endl;
        cout << this->getType() << " uses Hogwarts to regenerate!" << endl;
        this->setStrength(20);
        hogwarts = false;
        cout << this->getType() << " armor points: " << this->getArmor() << endl;
        cout << this->getType() << " strength points: " << this->getStrength() << endl;
    }
    else if (damageInflicted == 100 && hogwarts == false)
    {
        cout << this->getType() << " has been turned to stone by Medusa's glare!" << endl;
        cout << this->getType() << " has no more hogwarts ability and has died!" << endl;
        cout << this->getType() << " armor points: " << this->getArmor() << endl;
        cout << this->getType() << " strength points: " << this->getStrength() << endl;

        this->setStatus(false);
    }
}

int Harry_Potter::rollAttack()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;

    return roll_1 + roll_2;
}

int Harry_Potter::rollDefense()
{
    int roll_1 = rand() % 6 + 1;
    int roll_2 = rand() % 6 + 1;

    return roll_1 + roll_2;
}

Harry_Potter::~Harry_Potter()
{
}
