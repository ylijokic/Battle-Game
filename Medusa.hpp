/**********************************************************
**  Program Name:  Header file for the Medusa class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:
**********************************************************/

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "Character.hpp"

class Medusa : public Character
{
  protected:
    int glare;

  public:
    virtual int attack();
    virtual int rollAttack();
    virtual int rollDefense();

    Medusa();
    virtual ~Medusa();
};

#endif