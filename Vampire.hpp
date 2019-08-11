/**********************************************************
**  Program Name:  Header file for Vampire class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:   
**********************************************************/

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "Character.hpp"

class Vampire : public Character
{
  protected:
    int charm;

  public:
    virtual void defense(int attack);
    virtual int rollAttack();
    virtual int rollDefense();

    Vampire();
    virtual ~Vampire();
};

#endif