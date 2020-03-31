/******************************************************************************
** Description: This is the header file for a Menu class that contains 
**              functions for prompting the user with questions. The class is
**              meant to be generalizeable and can be used with many programs. 
******************************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include <vector>
#include "inputValidation.hpp"

class Menu{

    public: 
        void showTitleAuthor(string title, string author);
        int getInput(int min, int max);
        int addInt(string prompt, int minVal, int maxVal);
        int showChoices(string prompt, std::vector<string>& choices);
    
};
#endif
