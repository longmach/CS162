/******************************************************************************
** Description: This is a re-usable menu function class that asks the user for 
**              input depending on the question type. 
******************************************************************************/
#include "Menu.hpp"
#include "inputValidation.hpp"

/******************************************************************************
** Description: This function takes two string arguments -- the title of the
**              program and the program author. It then displays the title
**              and author as centered text to the user. This function does
**              not return anything. 
******************************************************************************/
void Menu::showTitleAuthor(string title, string author){

    //set up padding for centered text
    int titleSize = title.size() + 12;
    int authorSize = author.size() + 3;
    int titleSpace = (50 - titleSize) / 2;
    int authorSpace = (50 - authorSize) / 2;

    //display title
    cout << string(50, '=') << endl;
    cout << string(titleSpace, ' ') << "Welcome to " << title << "!" << string(titleSpace, ' ') << endl;
    cout << endl;
    cout << string(authorSpace, ' ') << "by " << author << string(authorSpace, ' ') << endl;
    cout << string(50, '=') << endl;
}

int Menu::getInput(int min, int max)
{
    string input;

    //get user input
    getline(cin, input);

    //ensure valid input
    while (!validateInput(input, min, max)) {
        getline(cin, input);
    }

    //convert string to int
    int num = std::stoi(input, NULL, 10);

    return num;
}

/******************************************************************************
** Description: This function takes one string argument in the form of a
**              question and two int parameters --one for a non-negative
**              minimum int and one for a non-negative maximium int. The
**              function prompts the user for the question and returns the
**              int value.
******************************************************************************/
int Menu::addInt(string prompt, int minVal, int maxVal)
{
    //display prompt
    cout << prompt << endl;

    return getInput(minVal, maxVal);
}

//************************************
// Method:    showChoices
// Usage:
//         std::vector<string> choices;
//         choices.push_back("first option");
//         choices.push_back("second option");
//         choices.push_back("third option");
//         Menu menu;
//         int choice = menu.showChoices("Please choose from these options", choices);
// Description:
//************************************
int Menu::showChoices(string prompt, std::vector<string>& choices)
{
    int nChoices = choices.size();
    //display prompt with questions
    std::string menu;
    menu += prompt + "\n";
    for (int i = 0; i < nChoices; i++)
    {
        menu += std::to_string(i + 1) + ") " + choices[i] + "\n";
    }
    menu += "Please enter your choice: ";

    cout << menu;

    return getInput(1, nChoices);
}
