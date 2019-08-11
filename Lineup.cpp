/**********************************************************
** Program Name:  Implementation file for the Lineup class
** Author:        Charlie Ylijoki
** Date:          11/11/2018
** Description:   The Lineup implementation file contains 
the necessary functions to add a node to the end of the list, 
remove the first node, display the first node, and display
the whole list. There is also a constructor and a destructor.
**********************************************************/
#include <iostream>
//Include Header file
#include "Lineup.hpp"

using std::cout;
using std::endl;

//Default Constructor initializes head data member to nullptr
Lineup::Lineup()
{
    head = nullptr;
    //head->newCharacter = nullptr;
}

//This bool function returns true if there are no QueueNodes in the circular list
bool Lineup::isEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Returns the int value held by the head Node in the circular list
Character *Lineup::getFront()
{
    return head->newCharacter;
}

//Adds a new Node to the back of the list
void Lineup::addBack(Character *userCharacter)
{
    //If the list is empty create a new Node
    //and set equal to that Node
    if (this->isEmpty() == true)
    {
        head = new Node;

        head->newCharacter = userCharacter;
        head->next = head;
        head->prev = head;
        return;
    }
    //If there is only one Node
    else if (head->next == head && head->prev == head)
    {
        Node *tail = new Node;

        tail->newCharacter = userCharacter;
        tail->next = head;
        tail->prev = head;
        head->next = tail;
        head->prev = tail;
        return;
    }
    //If there is more than one Node
    else
    {
        Node *tail = head->prev;
        head->prev = tail;

        Node *node = new Node;
        node->newCharacter = userCharacter;
        node->next = head;
        node->prev = tail;

        tail->next = node;
        head->prev = node;
    }
}

//removes the front Node from the list
void Lineup::removeFront()
{
    //If the list is empty
    if (this->isEmpty() == true)
    {
        cout << "The queue is empty. Cannot remove values." << endl;
        return;
    }
    //If there is only one Node in the list
    else if (head->next == head && head->prev == head)
    {
	//delete head->newCharacter;
        delete head;
        head = nullptr;
    }
    //If there are multiple QueueNodes in the list
    else
    {
        Node *temp = head;
        Node *tail = head->prev;

        head = head->next;
        head->prev = tail;
        tail->next = head;

	//delete temp->newCharacter;
        delete temp;
        temp = nullptr;
    }
}
//Prints the values in the list
void Lineup::printQueue()
{

    if (this->isEmpty() == true)
    {
        cout << "The queue is empty." << endl;
        return;
    }
    else if (head->next == head && head->prev == head)
    {
        cout << head->newCharacter->getType() << " named " << head->newCharacter->getName();
    }
    else
    {
        Node *temp = head;
        do
        {
            cout << temp->newCharacter->getType() << " named " << temp->newCharacter->getName() << " " << endl;
            temp = temp->next;

        } while (temp->next != head);
        cout << temp->newCharacter->getType() << " named " << temp->newCharacter->getName();
    }

    cout << endl;
    return;
}

void Lineup::setName(int n)
{
    name = n;
}

int Lineup::getName()
{
    return name;
}

//Destructor to dene(cin, target_value);
//        if (isInt(target_value) == true)
//                {
//                            valid = true;
//                                        value = stoi(target_value);
//                                                }
//                                                        else if (isInt(target_value) == false)
//                                                                {
//                                                                            valid = false;
//                                                                                        cout << "Invalid. Please enter a positive integer." << endl;
//                                                                                                }
//
//                                                                                                    } while (!valid);allocate memory site aside for each Node
Lineup::~Lineup()
{
    cout << "In Lineup Destructor" << endl;
    cout << getName() << endl;
    if (this->isEmpty() == true)
    {
        return;
    }

    else
    {
    Node *temp = head;
    do
    {
        Node *temp2 = temp->next;
	//delete temp->newCharacter;
        delete temp;
        temp = temp2;
    } while (temp != head);
    }
}
