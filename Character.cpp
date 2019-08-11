/**********************************************************
**  Program Name:  Implementation file for Character base class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:    
**********************************************************/

#include "Character.hpp"

using std::cout;
using std::endl;

Character::Character()
{
    setArmor(armor);
    setStrength(strength);
    setType(type);
    setStatus(true);
    Attack = 0;
    Defense = 0;
}

int Character::attack()
{
    Attack = this->rollAttack();

    cout << this->getType() << " attacks!\n"
         << this->getType() << " generated " << Attack << " attack points on their roll." << endl;
    return Attack;
}

void Character::defense(int attack)
{
    Defense = this->rollDefense();

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
        cout << damageInflicted << endl;
        cout << this->getType() << " defends without damage.\n"
             << this->getType() << " armor points: " << this->getArmor() << endl;
        cout << this->getType() << " strength points: " << this->getStrength() << endl;
    }
    else if (damageInflicted > 0 && damageInflicted != 100)
    {
        this->setStrength(this->getStrength() - damageInflicted);
        if (strength > 0)
        {
            cout << damageInflicted << endl;
            cout << this->getType() << " is damaged.\n"
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

void Character::recovery()
{
    int restore = rand() % 4 + 1;

    if (restore == 1 || restore == 3)
    {
        int points = this->getStrength() / 2;
        this->setStrength(this->getStrength() + points);
    }
}

int Character::getArmor()
{
    return armor;
}

int Character::getStrength()
{
    return strength;
}

string Character::getType()
{
    return type;
}

string Character::getName()
{
    return name;
}

bool Character::getStatus()
{
    return alive;
}

void Character::setArmor(int a)
{
    armor = a;
}

void Character::setStrength(int s)
{
    strength = s;
}

void Character::setType(string t)
{
    type = t;
}

void Character::setName(string n)
{
    name = n;
}

void Character::setStatus(bool status)
{
    alive = status;
}

Character::~Character()
{
}
