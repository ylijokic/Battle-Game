/**********************************************************
**  Program Name:  Header file for Character base class
**  Author:        Charlie Ylijoki
**  Date:          11/4/2018
**  Description:  
**********************************************************/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

using std::string;

class Character
{
protected:
  int armor,
      strength;

  bool alive;
  string type;
  string name;

  int Attack;
  int Defense;

public:
  virtual int attack();
  virtual void defense(int attack);

  int getArmor();
  int getStrength();
  string getType();
  string getName();
  bool getStatus();

  void setArmor(int a);
  void setStrength(int s);
  void setType(string t);
  void setName(string n);
  void setStatus(bool status);

  virtual int rollAttack() = 0;
  virtual int rollDefense() = 0;

  void recovery();

  Character();
  virtual ~Character();
};

#endif
