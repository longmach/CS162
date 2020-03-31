/******************************************************************************
 **Program Name:    main.cpp
 **Author:                  Long Mach
 **Date:                     10/29/19
 **Description:     main function
 *****************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//#include "Menu.hpp"
//#include "inputValidation.hpp"
//#include "Player.hpp"
//#include "Child.hpp"
//#include "Queue.hpp"
#include "Game.hpp"

int main()
{
    Menu menu;
    
    //Begin user prompts
    menu.showTitleAuthor("Stages of Life", "Long Mach");

    int choice = 1;

    string line(50, '=');

    while (choice != 2)
    {
        Game newGame;
        newGame.playGame();
        
        // ask if user want to start another life
        cout << string(40,'-') << endl;
        std::vector<string> choices =
        {
            "Start a new Life",
            "Exit"
        };
        choice = menu.showChoices("How would you like to proceed?", choices);
        
        cout << string(40,'-') << endl;
    }
    
    return 0;
}
