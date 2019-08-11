#include <iostream>

#include "Menu.hpp"

int main()
{
    Menu newMenu;

    do
    {
        newMenu.gameplay();

    } while (newMenu.playAgain() == true);
    return 0;
}