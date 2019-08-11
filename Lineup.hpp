/**********************************************************
** Program Name:  Header file for the Node struct and Lineup class
** Author:        Charlie Ylijoki
** Date:          11/11/2018
** Description:   The Lineup header file contains the Node
struct and the Lineup class.
***********************************************************/
#ifndef LINEUP_HPP
#define LINEUP_HPP

#include "Character.hpp"

//Struct for the Nodes in the Lineup
struct Node
{
  Character *newCharacter;
  struct Node *next;
  struct Node *prev;
};

//Lineup Class declaration
class Lineup
{
private:
  //Pointer to a Node struct object
  struct Node *head;
  int name;
public:
  //Default Constructor and Destructor
  Lineup();
  ~Lineup();

  int getName();
  void setName(int);

  //Function to tell if circular list is empty
  bool isEmpty();

  //Function to add data to circular linked list
  void addBack(Character *userCharacter);
  //Function to return first value in list
  Character *getFront();
  //Function to remove first value in the list
  void removeFront();
  //Function to display the contents of the list
  void printQueue();
};

#endif
