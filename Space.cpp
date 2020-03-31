/******************************************************************************
 **Program Name:    Character.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for Character Class. Character has
some member data: attack, defense, armor, and strength points, attack and defense dice.
 *getters, virtual destructor and pure attack, defense function.
******************************************************************************/
#include "Space.hpp"

/******************************************************************************
** Description: constructor
******************************************************************************/
Space::Space()
{
}

/******************************************************************************
** Description: pure virtual destructor
******************************************************************************/
Space::~Space()
{
}

/******************************************************************************
** Description: getters
******************************************************************************/
void Space::setStage(int newStage)
{
    stage = newStage;
}

int Space::getStage()
{
    return stage;
}

/******************************************************************************
** Description: learn
******************************************************************************/
Space::stat Space::learn(int option)
{
    stat newStat
    {
        10,         //happiness;
        -10,        //health;
        -10000,          //money;
        0,          //expenses;
        10,         //knowledge;
    };
    switch (option) {
        case 1: // college
            //cout << "You go to college and it offers more career and salary options, but it takes time and puts you in debt (100k). \n";
            //cout << "\"How old do you have to be before you know what's going on?.\"- Calvin and Hobbes \n";
            newStat.money = -100000;
            newStat.knowledge = 40;
            break;
        case 2: // self development
            //cout << "Continuous self development is essential to advance your career. \n";
            //cout << "I really could not find a good quote here. Sorry!\n";
            break;
    }
    return newStat;
}

/******************************************************************************
** Description: play
******************************************************************************/
Space::stat Space::play(int option)
{
    stat newStat
    {
        -10,      //happiness;
        -20,    //health;
        -50000,  //money;
        0,      //expenses;
        0,      //knowledge;
    };
    switch (option) {
        case 1: // party
            //cout << "You are the life of every party you have ever attended \n";
            //cout << "You think ...\n";
            //cout << "\"I don't need to \"get a life\". I'm a gamer. I have lots of lives.\"- Unknown \n";
            break;
        case 2: // shopping
            //cout << "An iToilet plated with fake gold and cheap diamons on sale for 50%, only 100k, sweet! \n";
            //cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.happiness = 0;
            newStat.health = 0;
            newStat.money = -100000;
            newStat.expenses = 0;
            newStat.knowledge = 0;
            break;
        case 3: // gambling
            //cout << "My god, you just win 10k easily in Las Vegas, may be you should focus more on this \n";
            //cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.happiness = -10;
            newStat.health = -10;
            newStat.money = 10000;
            newStat.expenses = 0;
            newStat.knowledge = 0;
            break;
        case 4: // travel
            //cout << "Traveling expands your minds and enlarges your heart. The world is truly big and wonderful. So is your instagram account. \n";
            //cout << "\"Adventure is out there.\"- Up \n";
            newStat.happiness = 10;
            newStat.health = -10;
            newStat.money = -50000;
            newStat.expenses = 0;
            newStat.knowledge = 5;
            break;
            
    }
    return newStat;
}

/******************************************************************************
** Description: love
******************************************************************************/
Space::stat Space::love(int option)
{
    stat newStat
    {
        20,         //happiness;
        20,         //health;
        -5000,      //money;
        75000,      //expenses;
        0,         //knowledge;
    };
    switch (option) {
        case 1: // marriage
            //cout << "Congratulation! You just get your one and only spouse that you can have! \n";
            //cout << "\"I am your wife! I’m the greatest good you’re ever gonna get.\"- The Incredibles \n";
            break;
        case 2: // make BFF
            //cout << "Make a best friend! As we get older, it gets more difficult to find a good friends, so please treasure the one you have.\n";
            //cout << "\"You and I are a team. There is nothing more important than our friendship\"- Monsters INC. \n";
            newStat.happiness = 10;
            newStat.health = 0;
            newStat.money = -1000;
            newStat.expenses = 5000;
            newStat.knowledge = 0;
            break;
        case 3: // Spend time with family
            //cout << "Treasure every moment with your family while you still can.\n";
            //cout << "\"Ohana means family and family means nobody gets left behind. Or forgotten.\"- Lilo and Stitch \n";
            newStat.happiness = 10;
            newStat.health = 0;
            newStat.money = -1000;
            newStat.expenses = 0;
            newStat.knowledge = 0;
            break;
        case 4: // have a baby
            //cout << "One of the most wonderful things ever come to your life: a baby, your baby!";
            //cout << "\"I look at you and I am home.\"- Finding Nemo \n";
            newStat.happiness = 20;
            newStat.health = -20;
            newStat.money = -5000;
            newStat.expenses = 30000;
            newStat.knowledge = 0;
            break;
        case 5: // have a pet
            //cout << "what can be greater than an unrequited love? \n";
            //cout << "\"I have just met you, and I love you.\"- Up \n";
            newStat.happiness = 10;
            newStat.health = 10;
            newStat.money = -1000;
            newStat.expenses = 10000;
            newStat.knowledge = 0;
            break;
    }
    return newStat;
}

/******************************************************************************
** Description: work
******************************************************************************/
Space::stat Space::work(int option)
{
    stat newStat
    {
        -10,        //happiness;
        -10,        //health;
        0,          //money;
        0,          //expenses;
        0,         //knowledge;
    };
    return newStat;
}

/******************************************************************************
** Description: exercise
******************************************************************************/
Space::stat Space::exercise(int option)
{
    stat newStat
    {
        0,    //happiness;
        20,    //health;
        0,     //money;
        0,     //expenses;
        0,     //knowledge;
    };
    return newStat;
}


