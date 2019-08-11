/**********************************************************
**  Program Name:  Header file for Barbarian class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description: 
**********************************************************/

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Character.hpp"

class Barbarian : public Character
{
protected:
public:
  virtual int rollAttack();
  virtual int rollDefense();

  Barbarian();
  virtual ~Barbarian();
};

#endif