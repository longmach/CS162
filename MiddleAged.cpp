/******************************************************************************
** Program Name:    MiddleAged.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for MiddleAged class with
similar functions that call Space class function with addition information.
 ******************************************************************************/
#include "MiddleAged.hpp"


/******************************************************************************
** Description: Constructor
******************************************************************************/

//Child::Child(Player newPlayer) : Space(newPlayer)
MiddleAged::MiddleAged() : Space()
{
    stage = 3;
}

/******************************************************************************
** Description: destructor
******************************************************************************/
MiddleAged::~MiddleAged()
{
}

/******************************************************************************
** Description: work
******************************************************************************/

Space::stat MiddleAged::work(int option)
{
    stat newStat
    {
        -15,        //happiness;
        -15,        //health;
        0,          //money;
        0,          //expenses;
        0,         //knowledge;
    };
    cout << "Finally Friday!!! \n";
    cout << "\"I’m not saying it’s not bad. It’s bad. But it could be worse.\"- Saul Goodman \n";
    return newStat;
}

/******************************************************************************
** Description: exercise
******************************************************************************/
Space::stat MiddleAged::exercise(int option)
{
    stat newStat
    {
        0,        //happiness;
        15,        //health;
        0,          //money;
        0,          //expenses;
        0,         //knowledge;
    };
    cout << "Enjoy a physical activity at least 30 mins, 3 times a week ... \n";
    cout << "\"The greatest wealth is health.\"- Virgil \n";
    return newStat;
}

/******************************************************************************
** Description: learn
******************************************************************************/
Space::stat MiddleAged::learn(int option)
{
    stat newStat = Space::learn(option);
    switch (option) {
        case 1:
            cout << "You go to college and it offers more career and salary options, but it takes time and puts you in debt (200k). \n";
            cout << "\"How old do you have to be before you know what's going on?.\"- Calvin and Hobbes \n";
            newStat.money = -200000;
            break;
        case 2:
            cout << "Continuous self development is essential to advance your career. \n";
            cout << "I really could not find a good quote here. Sorry!\n";
            break;
    }
    return newStat;
}

/******************************************************************************
** Description: play
******************************************************************************/
Space::stat MiddleAged::play(int option)
{
    stat newStat = Space::play(option);
    switch (option) {
        case 1:
            cout << "Sometimes you think you are too tired for this ***. \n";
            newStat.happiness = -20;
            newStat.health = -30;
            newStat.money = 0;
            newStat.expenses = 50000;
            newStat.knowledge = 0;
            break;
        case 2:
            cout << "Cyber Monday everyone! We shop to fight against Communism! Long live Capitalism! \n";
            cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.happiness = -20;
            newStat.money = -200000;
            break;
        case 3:
            cout << "You won 1 million dollar!!! Well, too bad you lose it all after that. You might be a bit more lucky next time. At least you only loose 300k this time, things could be worse. \n";
            //cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.money = -300000;
            break;
        case 4:
            cout << "Error 404: out of humor. \n";
            cout << "\"Adventure is out there.\"- Up \n";
            break;
            
    }
    return newStat;
}

/******************************************************************************
** Description: love
******************************************************************************/
Space::stat MiddleAged::love(int option)
{
    stat newStat = Space::love(option);
    switch (option) {
        case 1:
            cout << "Congratulation! You just get your one and only spouse that you can have! \n";
            cout << "\"I am your wife! I’m the greatest good you’re ever gonna get.\"- The Incredibles \n";
            break;
        case 2:
            cout << "Make a best friend! As we get older, it gets more difficult to find a good friends, so please treasure the one you have.\n";
            cout << "\"You and I are a team. There is nothing more important than our friendship\"- Monsters INC. \n";
            break;
        case 3:
            cout << "Treasure every moment with your family while you still can.\n";
            cout << "\"Ohana means family and family means nobody gets left behind. Or forgotten.\"- Lilo and Stitch \n";
            break;
        case 4:
            cout << "One of the most wonderful things ever come to your life: a baby, your baby!\n";
            cout << "\"I look at you and I am home.\"- Finding Nemo \n";
            break;
        case 5:
            cout << "what can be greater than an unrequited love? \n";
            cout << "\"I have just met you, and I love you.\"- Up \n";
            break;
    }
    return newStat;
}

