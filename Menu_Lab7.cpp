/**********************************************************
** Program Name:  Implementation file for the Menu
** Author:        Charlie Ylijoki
** Date:          10/28/2018
** Description:   This contains the two functions that will 
help the simulation run. There is one function to provide the
user options on what function they want to run, and then a
second function to call whatever function the user selected
from the List class.
**********************************************************/
//Include Header file
#include "Menu_Lab7.hpp"

#include <iostream>
#include <string>

using std::basic_string;
using std::cin;
using std::cout;
using std::endl;
using std::stoi;
using std::string;

Menu::Menu()
{
	response = " ";
	good = true;
}
/*The get Option function proivides the user with 5 options. 
Depending on what number the user enters, one of the doubly
linked list functions is called or program quits.*/
string Menu::getOption()
{

	cout << "Choose from the following options: \n"
		 << "1. Add a value to the back of the Queue. \n"
		 << "2. Display the front value. \n"
		 << "3. Remove the front node. \n"
		 << "4. Display the queue's constent. \n"
		 << "5. Exit. \n";

	bool valid = false;
	do
	{
		getline(cin, response);

		if (response == "1" || response == "2" || response == "3")
		{
			valid = true;
		}
		else if (response == "4" || response == "5")
		{
			valid = true;
		}
		else
		{
			cout << "Invalid. Enter an option 1-5 on the Menu." << endl;
			valid = false;
		}
	} while (!valid);
	return response;
}
/*The perform option function takes in the string returned from the get option 
function as a parameter. It then calls a function from the List class, or exits, 
depending on the number that the user entered.*/
void Menu::performOption()
{
	if (response == "1")
	{
		int number;
		string num;
		Character *player1;
		bool valid = false;
		cout << "Enter the number you want to add to the back of the queue: " << endl;
		do
		{
			getline(cin, num);
			if (isInt(num) == true)
			{
				valid = true;
				number = stoi(num);
			}
			else if (isInt(num) == false)
			{
				valid = false;
				cout << "Invalid. Please enter a positive integer." << endl;
			}

		} while (!valid);
		cout << endl;
		newQueue.addBack(player1);
	}
	else if (response == "2")
	{
		cout << endl;

		if (newQueue.isEmpty() == true)
		{
			cout << "The queue is empty." << endl;
			return;
		}
		else
		{
			cout << "The front value of the queue is: " << newQueue.getFront() << endl;
		}
	}
	else if (response == "3")
	{
		cout << endl;
		newQueue.removeFront();
	}
	else if (response == "4")
	{
		cout << endl;
		newQueue.printQueue();
	}
	else if (response == "5")
	{
		cout << "Goodbye." << endl;
		setGood(false);
		return;
	}
	return;
}

bool Menu::getGood()
{
	return good;
}

void Menu::setGood(bool answer)
{
	good = answer;
}

Menu::~Menu()
{
}

//Function to verify that user input is an integer
bool Menu::isInt(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]) == false)
		{
			return false;
		}
	}
	return true;
}
