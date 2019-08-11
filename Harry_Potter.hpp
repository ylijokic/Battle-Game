/**********************************************************
**  Program Name:  Header file for the Harry Potter class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:
**********************************************************/

#ifndef HARRY_POTTER_HPP
#define HARRY_POTTER_HPP

#include "Character.hpp"

class Harry_Potter : public Character
{
  protected:
    bool hogwarts = true;

  public:
    virtual void defense(int attack);
    virtual int rollAttack();
    virtual int rollDefense();

    Harry_Potter();
    virtual ~Harry_Potter();
};

#endif