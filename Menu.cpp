/**********************************************************
** Program Name:  Implementation file for Menu class
** Author:        Charlie Ylijoki
** Date:          11/18/2018
** Description:   
**********************************************************/
#include "Menu.hpp"
#include <ctime>
#include <cmath>

using std::basic_string;
using std::cin;
using std::cout;
using std::endl;
using std::stoi;

Menu::Menu()
{
    player1_type = " ";
    player2_type = " ";
    Team1.setName(1);
    Team2.setName(2);
    Losers.setName(3);
}

int Menu::getNumFighters_team1()
{
    string fighters_team1;
    cout << "Enter the number of fighters Team 1 will have: \n";
    bool valid = false;
    do
    {
        //cin.ignore();
        getline(cin, fighters_team1);
        if (isInt(fighters_team1) == true)
        {
            valid = true;
            numFighters_team1 = stoi(fighters_team1);
            return numFighters_team1;
        }
        else if (isInt(fighters_team1) == false)
        {
            valid = false;
            cout << "Invalid. Please enter a positive integer." << endl;
        }

    } while (valid != true);
}

int Menu::getNumFighters_team2()
{
    string fighters_team2;
    cout << "Enter the number of fighters Team 2 will have: \n";
    bool valid = false;
    do
    {
        //cin.ignore();
        getline(cin, fighters_team2);
        if (isInt(fighters_team2) == true)
        {
            valid = true;
            numFighters_team2 = stoi(fighters_team2);
            return numFighters_team2;
        }
        else if (isInt(fighters_team2) == false)
        {
            valid = false;
            cout << "Invalid. Please enter a positive integer." << endl;
        }

    } while (valid != true);
}

void Menu::fillTeam1Lineup()
{
    getNumFighters_team1();
    cout << endl;
    cout << "Fill Team 1 with " << numFighters_team1 << " fighters." << endl;
    for (int i = 0; i < numFighters_team1; i++)
    {
        cout << "Select what type of Character fighter " << i + 1 << " will be: \n"
             << "Barbarian \n"
             << "Vampire \n"
             << "Blue Men \n"
             << "Medusa \n"
             << "Harry Potter \n";

        bool valid = false;
        do
        {
            //cin.ignore();
            getline(cin, player1_type);

            if (player1_type == "Barbarian")
            {
                Team1.addBack(new Barbarian);
                //player1 = new Barbarian;
                //string n;
                cout << "Enter the name of the Barbarian: " << endl;
                //cin.ignore();
                //getline(cin, n);
                //player1->setName(n);
                //Team1.addBack(player1);
                valid = true;
            }
            else if (player1_type == "Vampire")
            {
                player1 = new Vampire;
                string n;
                cout << "Enter the name of the Vampire: " << endl;
                //cin.ignore();
                getline(cin, n);
                player1->setName(n);
                Team1.addBack(player1);
                valid = true;
            }
            else if (player1_type == "Blue Men")
            {
                player1 = new Blue_Men;
                string n;
                cout << "Enter the name of the Blue Men: " << endl;
                //cin.ignore();
                getline(cin, n);
                player1->setName(n);
                Team1.addBack(player1);
                valid = true;
            }
            else if (player1_type == "Medusa")
            {
                player1 = new Medusa;
                string n;
                cout << "Enter the name of the Medusa: " << endl;
                //cin.ignore();
                getline(cin, n);
                player1->setName(n);
                Team1.addBack(player1);
                valid = true;
            }
            else if (player1_type == "Harry Potter")
            {
                player1 = new Harry_Potter;
                string n;
                cout << "Enter the name of the Harry Potter: " << endl;
                //cin.ignore();
                getline(cin, n);
                player1->setName(n);
                Team1.addBack(player1);
                valid = true;
            }
            else
            {
                cout << "Invalid. Please enter one of the Character names from the list: \n"
                     << "Barbarian \n"
                     << "Vampire \n"
                     << "Blue Men \n"
                     << "Medusa \n"
                     << "Harry Potter \n";
                valid = false;
            }

        } while (!valid);
        cout << endl;
    }
}

void Menu::fillTeam2Lineup()
{
    getNumFighters_team2();
    cout << endl;
    cout << "Fill Team 2 with " << numFighters_team2 << " fighters." << endl;
    for (int j = 0; j < numFighters_team2; j++)
    {
        cout << "Select what type of Character fighter " << j + 1 << " will be: \n"
             << "Barbarian \n"
             << "Vampire \n"
             << "Blue Men \n"
             << "Medusa \n"
             << "Harry Potter \n";

        bool valid = false;
        do
        {
            //cin.ignore();
            getline(cin, player2_type);

            if (player2_type == "Barbarian")
            {
                player2 = new Barbarian;
                string n;
                cout << "Enter the name of the Barbarian: " << endl;
                //cin.ignore();
                getline(cin, n);
                player2->setName(n);
                Team2.addBack(player2);
                valid = true;
            }
            else if (player2_type == "Vampire")
            {
                player2 = new Vampire;
                string n;
                cout << "Enter the name of the Vampire: " << endl;
                //cin.ignore();
                getline(cin, n);
                player2->setName(n);
                Team2.addBack(player2);
                valid = true;
            }
            else if (player2_type == "Blue Men")
            {
                player2 = new Blue_Men;
                string n;
                cout << "Enter the name of the Blue Men: " << endl;
                //cin.ignore();
                getline(cin, n);
                player2->setName(n);
                Team2.addBack(player2);
                valid = true;
            }
            else if (player2_type == "Medusa")
            {
                player2 = new Medusa;
                string n;
                cout << "Enter the name of the Medusa: " << endl;
                //cin.ignore();
                getline(cin, n);
                player2->setName(n);
                Team2.addBack(player2);
                valid = true;
            }
            else if (player2_type == "Harry Potter")
            {
                player2 = new Harry_Potter;
                string n;
                cout << "Enter the name of the Harry Potter: " << endl;
                //cin.ignore();
                getline(cin, n);
                player2->setName(n);
                Team2.addBack(player2);
                valid = true;
            }
            else
            {
                cout << "Invalid. Please enter one of the Character names from the list: \n"
                     << "Barbarian \n"
                     << "Vampire \n"
                     << "Blue Men \n"
                     << "Medusa \n"
                     << "Harry Potter \n";
                valid = false;
            }

        } while (!valid);
        cout << endl;
    }
}

void Menu::gameplay()
{
    fillTeam1Lineup();
    cout << endl;
    fillTeam2Lineup();
    cout << endl;

    int battle = 1;
    do
    {
        bool play1 = true;
        bool play2 = true;
        cout << "This is Battle number " << battle << " between Team 1 and Team 2." << endl;
        cout << endl;
        cout << "Team 1 fighter Character type " << Team1.getFront()->getType() << endl;
        cout << "Team 2 fighter Character type " << Team2.getFront()->getType() << endl;

        srand(time(NULL));
        round = 1;
        do
        {
            cout << "*****************************************" << endl;
            cout << "Round " << round << " :" << endl;

            //Call Team 1 fighter's attack function
            cout << endl;
            cout << "Team 1 fighter attacks: \n";
            cout << endl;
            int attack_points1 = Team1.getFront()->attack();

            //Call Team 2 fighter's defense function
            cout << endl;
            cout << "Team 2 fighter defends: \n";
            cout << endl;
            Team2.getFront()->defense(attack_points1);

            //If the fighter has died then end the round
            if (Team2.getFront()->getStatus() == false)
            {
                cout << "Team 1 fighter wins!" << endl;
                Losers.addBack(Team2.getFront());
                //Team2.removeFront();
                play2 = false;
                Team1.getFront()->recovery();
                //Team1.addBack(Team1.getFront());
            }

            cout << endl;
            //Otherwise call Team 2 fighter's attack function
            if (Team2.getFront()->getStatus() != false)
            {
                cout << "Team 2 fighter attacks: \n";
                cout << endl;
                int attack_points2 = Team2.getFront()->attack();

                cout << endl;
                //Call Team 1 fighter's defense function
                cout << "Team 1 fighter defends: \n";
                cout << endl;
                Team1.getFront()->defense(attack_points2);
                if (Team1.getFront()->getStatus() == false)
                {
                    cout << "Team 2 fighter wins!" << endl;
                    Losers.addBack(Team1.getFront());
                    //Team1.removeFront();
                    play1 = false;
                    Team2.getFront()->recovery();
                    //Team2.addBack(Team2.getFront());
                }
            }
            cout << "*****************************************" << endl;
            cout << endl;
            string game;
            bool valid;
            cout << "PRESS ENTER TO CONTINUE" << endl;
            do
            {
                //cin.ignore();
                getline(cin, game);
                if (game == "")
                {
                    valid = true;
                }
                else
                {
                    cout << "Invalid. Press Enter." << endl;
                    valid = false;
                }
            } while (!valid);
            round++;
        } while (Team1.getFront()->getStatus() == true && Team2.getFront()->getStatus() == true);

        if (play1 == false)
        {
            Team1.removeFront();
            //Losers.addBack(Team1.getFront());
            Team2.addBack(Team2.getFront());
        }
        if (play2 == false)
        {
            Team2.removeFront();
            //Losers.addBack(Team2.getFront());
            Team1.addBack(Team1.getFront());
        }

        battle++;
    } while (Team1.isEmpty() != true && Team2.isEmpty() != true);
    displayLosers();
    cout << "Team 1: " << endl;
    Team1.printQueue();
    cout << "Team 2: " << endl;
    Team2.printQueue();
}

void Menu::displayLosers()
{
    cout << "Do you want to view the list of Losers?\n"
         << "Input 'Y' or 'N' : " << endl;

    string input = " ";
    bool valid = false;
    do
    {
        //cin.ignore();
        getline(cin, input);
        if (input == "Y")
        {
            valid = true;
            Losers.printQueue();
        }
        else if (input == "N")
        {
            valid = true;
        }
        else
        {
            valid = false;
            cout << "Invalid. Please enter 'Y' or 'N'" << endl;
        }
    } while (!valid);
}

bool Menu::playAgain()
{
    cout << "Would you like to play again? \n"
         << "Input 'Y' or 'N': " << endl;

    string play = " ";
    bool valid = false;
    do
    {
        //cin.ignore();
        getline(cin, play);
        if (play == "Y")
        {
            valid = true;
            for (int i = 0; i < numFighters_team1; i++)
            {
                delete player1;
            }
            for (int j = 0; j < numFighters_team2; j++)
            {
                delete player2;
            }
            return true;
        }
        else if (play == "N")
        {
            valid = true;
            return false;
        }
        else
        {
            valid = false;
            cout << "Invalid. Please enter 'Y' or 'N'" << endl;
        }
    } while (!valid);
    return false;
}

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

Menu::~Menu()
{
    cout << "IN THE DESTRUCTOR!" << endl;
    /*
    do
    {
	delete player1;

    } while (player1 != nullptr);

    do
    {
	delete player2;

    } while (player2 != nullptr);
    */
    for (int i = 0; i < numFighters_team1; i++)
    {
        delete player1;
    }
    for (int j = 0; j < numFighters_team2; j++)
    {
        delete player2;
    }
}
