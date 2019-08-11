/**********************************************************
**  Program Name:  Header file for the Blue Men class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:  
**********************************************************/

#ifndef BLUE_MEN_HPP
#define BLUE_MEN_HPP

#include "Character.hpp"

class Blue_Men : public Character
{
  protected:
    int mob;

  public:
    virtual int rollAttack();
    virtual int rollDefense();

    Blue_Men();
    virtual ~Blue_Men();
};

#endif