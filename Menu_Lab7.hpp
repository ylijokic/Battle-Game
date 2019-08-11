/**********************************************************
** Program Name:  Header file for the Menu
** Author:        Charlie Ylijoki
** Date:          11/11/2018
** Description:   
**********************************************************/
#ifndef MENU_HPP
#define MENU_HPP

//Include Header files
#include "Queue.hpp"

#include <string>
using std::string;

class Menu
{
private:
  //An instance of Queue class to call functions
  Queue newQueue;
  string response;
  bool good;

public:
  Menu();
  string getOption();
  void performOption();

  bool getGood();
  void setGood(bool);
  bool isInt(string);
  ~Menu();
};

#endif
