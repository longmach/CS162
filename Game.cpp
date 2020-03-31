/******************************************************************************
 **Program Name:   Queue.cpp
 **Author:                 Long Mach
 **Date:                    11/04/19
** Description: This is the header file for Game class, including:
 - playGame: run the game
 - action: to run action that player choose
 - result: result from above action
 - cont: ask player if she wants to continue the game or not
 - check: to check if win or lose.
******************************************************************************/
#include "Game.hpp"

/******************************************************************************
** Description: constructor
******************************************************************************/

Game::Game()
{
    newLife = new Queue;
    newPlayer = new Player(newLife->getFront());
    timeTravel = degree = career = marriage = 1;
    treasureCount = 3;
}

/******************************************************************************
** Description: Destructor, deallocate dynamic memory allocation.
******************************************************************************/

Game::~Game()
{
    delete newLife;
    delete newPlayer;
}

/******************************************************************************
** Description: Main function to run the game
******************************************************************************/
void Game::playGame()
{
    cout << "The object of this game is live until 60, with at least 1 spouse, 1 kid, 1 BFF, 1 pet and 500k in cash. Even though there are so many things in life that we want to do, but our time and energy is very limited. Thefore, every block of five years, you need to choose 3 things that you want to focus on. Watch your status carefully and good luck with your new life. \n \n";
    cout << "Game over if one of these are true: \n";
    cout << "1- Loan reaches 1 million. \n";
    cout << "2- Happiness is below 0. \n";
    cout << "3- Health is below 0. \n";
    cout << "\"Life was like a box of chocolates. You never know what you're gonna get.\"- Forest Gump \n \n";
    int exit = 0;
    while (exit != 2) {
        
        // get intro for correct age group
        newPlayer->intro(newPlayer->getSpace()->getStage());
        Menu menu;
        
        // set up choices
        std::vector<string> choices =
        {
            "Go to college",
            "Start a career",
            "Get married",
            "Make a best friend",
            "Have kids",
            "Adopt a pet",
            "Party",
            "Let me see what is on sale",
            "Do you want to try your luck?",
            "Visit different country",
            "Exercise regularly"
        };
        
        // get a temp menu for choices
        std::vector<string> temp = choices;
        
        // to contain player's choice
        std::vector<int> option = {0, 0, 0};
        
        // use to check if player choose to work this space
        work = 1;
        
        // change the option name if player choose these already
        if (degree == 0)
        {
            temp.at(0) = "Continue your self development";
        }
        if (career == 0)
        {
            temp.at(1) = "Work";
        }
        if (marriage == 0)
        {
            temp.at(2) = "Spend more time with your family";
        }

        // assign player's choice to the container
        for (int i = 0; i < 3; i++)
        {
            string line = "Please choose option " + std::to_string(i+1) + ":";
            int choice = menu.showChoices(line, temp);
            option.at(i) = choice;
            
            // for second choice
            if (i == 1)
            {
                if (choice >= option.at(i-1))
                {
                   option.at(i) += 1;
                }
            }
            
            // for third choice
            if (i == 2)
            {
                if ((choice >= option.at(i-1) - 1) && (choice >= option.at(i-2) - 1))
                {
                    option.at(i) += 2;
                }
                else if ((choice < option.at(i-1)) && (choice < option.at(i-2)))
                {
                    option.at(i) = choice;
                }
                else if ((choice >= option.at(i-1) - 1) || (choice >= option.at(i-2) - 1))
                {
                    option.at(i) += 1;
                }
            }
            
            // run result from those choice
            result(action(option.at(i)));
            
            // shorten the option list
            temp.erase(temp.begin()+(choice-1));
            cout << string(40,'-') << endl;
        }
        
        // if player work this round, run the setIncome function
        if (work == 0)
        {
            newPlayer->setIncome();
        }
        // if not
        else
        {
            newPlayer->income = 0;
        }
        print();
        cout << "Your assets: ";
        newPlayer->printAsset();
        cout << endl;
        cout << "Your treasure: ";
        newPlayer->printTreasure();
        cout << endl;
        exit = cont();
        cout << string(40,'-') << endl;
    }
}

/******************************************************************************
** Description: options for the player
******************************************************************************/
Space::stat Game::action(int option)
{
    Space::stat action;
    switch (option)
    {
        case 1:
            // learn
            if (degree == 0)
            {
                action = newPlayer->getSpace()->learn(2);
            }
            else
            {
                action = newPlayer->getSpace()->learn(1);
                degree = 0;
                newPlayer->addAsset("CollegeDegree");
            }
            break;
        case 2:
            // work
            if (career == 1)
            {
                newPlayer->addAsset("JobTitle");
            }
            action = newPlayer->getSpace()->work(1);
            career = 0;
            work = 0;
            break;
        case 3:
            // marriage
            if (marriage == 0)
            {
                action = newPlayer->getSpace()->love(3);
            }
            else
            {
                action = newPlayer->getSpace()->love(1);
                marriage = 0;
                newPlayer->addTreasure("Spouse");
                treasureCount++;
            }
            break;
        case 4:
            // get BFF
            action = newPlayer->getSpace()->love(2);
            newPlayer->addTreasure("BFF");
            treasureCount++;
            break;
        case 5:
            // get a child
            action = newPlayer->getSpace()->love(4);
            newPlayer->addTreasure("Child");
            treasureCount++;
            break;
        case 6:
            // get a pet
            action = newPlayer->getSpace()->love(5);
            newPlayer->addTreasure("Pet");
            treasureCount++;
            break;
        case 7:
            // party
            action = newPlayer->getSpace()->play(1);
            newPlayer->addAsset("Hangover");
            break;
        case 8:
            // shopping
            action = newPlayer->getSpace()->play(2);
            newPlayer->addAsset("ThingYouDontNeed");
            break;
        case 9:
            // Gambling
            action = newPlayer->getSpace()->play(3);
            newPlayer->addAsset("Debt");
            break;
        case 10:
            // Travel
            action = newPlayer->getSpace()->play(4);
            newPlayer->addAsset("Photos");
            break;
        case 11:
            // Exercise
            action = newPlayer->getSpace()->exercise(2);
            break;
    }
    return action;
}

/******************************************************************************
** Description: add result from the action to the current player's stat
******************************************************************************/
void Game::result(Space::stat newStat)
{
    newPlayer->happiness += newStat.happiness;
    newPlayer->health += newStat.health;
    newPlayer->money += newStat.money;
    newPlayer->expenses += newStat.expenses;
    newPlayer->knowledge += newStat.knowledge;
}

/******************************************************************************
** Description: print player status
******************************************************************************/
void Game::print()
{
    newPlayer->setMoney();
    int age = newPlayer->getAge();
    int happiness = newPlayer->getHappy();
    int health = newPlayer->getHealth();
    int knowledge = newPlayer -> knowledge;
    int income = newPlayer-> income;
    int expenses = newPlayer -> expenses;
    int interest = newPlayer ->interest;
    int money = newPlayer->getMoney();
    
    cout << "Age:       " << std::setw(8) << age << endl;
    cout << "Happiness: " << std::setw(8) << happiness << endl;
    cout << "Health:    " << std::setw(8) << health << endl;
    cout << "Knowledge: " << std::setw(8) << knowledge << endl;
    cout << "Income:    " << std::setw(8) << income << endl;
    cout << "Expenses: -" << std::setw(8) << expenses << endl;
    cout << "Interest:  " << std::setw(8) << interest << endl;
    cout << "Money:     " << std::setw(8) << money << endl;
    cout << "Your saving is automatically invested or loan will be charged with 50% interest in 5 years.\n";
    //newPlayer->setFor();
    //age =newPlayer->getAge();
    //cout << age << endl;

}

/******************************************************************************
** Description: menu that the player can choose to move on or time travel back
******************************************************************************/
int Game::cont()
{
    if (!check())
    {
        Menu menu;
        std::vector<string> choices =
        {
            "Moving forward",
            "Exit"
        };
        
        // Add time travel option
        std::vector<string> temp = choices;
        if (timeTravel == 1)
        {
            if (newPlayer->getAge() > 30)
            {
                cout << "Like everyone else, you also wish to be able to time travel back to the past, so you can change things like buying Bitcoin early. And you actually have the ability to time travel, but only one time in your life. Use it wisely!\n";
                temp.push_back("Go back 5 years");
                //temp.erase(temp.begin()+(choice-1));
            }
        }
        int choice = menu.showChoices("How would you like to proceed?", temp);
        
        // forward
        if (choice == 1)
        {
            newPlayer->setFor();
        }
        
        // time travel
        else if (choice == 3)
        {
            newPlayer->setBack();
            timeTravel = 0;
        }
        return choice;
    }
    return 2;
}

/******************************************************************************
** Description: to check if player win or lose the game
******************************************************************************/
bool Game::check()
{
    bool gameOver = false;
    // losing messages
    if (newPlayer->health < 0)
    {
        cout << "*** You suffer a stroke and pass away, this is the result of physical inactivities in years. Remember being heathly is extremely important. \n";
        gameOver = true;
    }
    else if (newPlayer->happiness < 0)
    {
        cout << "*** Your depression gets the better of you and suicide is your option. Spend more time with people you love and they will help you to overcome it together. \n";
        gameOver = true;
    }
    else if (newPlayer->money < -1000000)
    {
        cout << "*** It is sad but we have to work to survive. Your loan is too much to pay off and you become homeless. \n";
        gameOver = true;
    }
    
    // winning message
    if (newPlayer->getAge() == 55)
    {
        if ((checkTreasure("Spouse")) && (checkTreasure("Child")) && (checkTreasure("BFF")) && (checkTreasure("Pet")) && (newPlayer->money > 500000))
        {
            cout << "*** Congratulation! You are lucky enough to have reach 60 years old, congratulation on your fulfilling life. Hope you can do the same in your real life. Life is short so please treasure every moment while you still can. And make sure you get that 500k for saving for retirement. \n";
        }
        
        // close to winning message
        else
        {
            cout << "*** Very close to winning but you need to spend a bit more time with important people in your life and to enjoy life more. \n";
        }
        gameOver = true;
    }
    return gameOver;
}

/******************************************************************************
** Description: check if a treasure in the container.
******************************************************************************/
bool Game::checkTreasure(string newTreasure)
{
    if(std::find(newPlayer->treasure.begin(), newPlayer->treasure.end(), newTreasure) != newPlayer->treasure.end()) {
        return true;
    } else {
        return false;
    }
}
