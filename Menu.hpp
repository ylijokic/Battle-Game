/**********************************************************
** Program Name:  Header file for Menu class
** Author:        Charlie Ylijoki
** Date:          11/18/2018
** Description:
**********************************************************/
#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>

#include "Lineup.hpp"

#include "Character.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "Medusa.hpp"
#include "Blue_Men.hpp"
#include "Harry_Potter.hpp"

using std::string;

class Menu
{
private:
  int round;

  string player1_type;
  string player2_type;

  Character *player1;
  Character *player2;

  int numFighters_team1;
  int numFighters_team2;

  Lineup Team1;
  Lineup Team2;

  Lineup Losers;

public:
  Menu();

  int getNumFighters_team1();
  int getNumFighters_team2();

  bool isInt(string s);

  void fillTeam1Lineup();
  void fillTeam2Lineup();

  Character *getPlayer1();
  Character *getPlayer2();

  void gameplay();
  void displayLosers();

  bool playAgain();
  ~Menu();
};

#endif
