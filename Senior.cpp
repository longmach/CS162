/******************************************************************************
** Program Name:    Senior.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for Senior class with
similar functions that call Space class function with addition information.
 ******************************************************************************/
#include "Senior.hpp"


/******************************************************************************
** Description: Constructor
******************************************************************************/

Senior::Senior() : Space()
{
    stage = 4;
}

/******************************************************************************
** Description: destructor
******************************************************************************/
Senior::~Senior()
{
}

/******************************************************************************
** Description: work
******************************************************************************/

Space::stat Senior::work(int option)
{
    stat newStat
    {
        -20,        //happiness;
        -20,        //health;
        0,          //money;
        0,          //expenses;
        0,         //knowledge;
    };
    cout << "They just put a new sign on the company entrance, Arbeit macht frei or something. I think it might be German. \n";
    return newStat;
}

/******************************************************************************
** Description: exercise
******************************************************************************/
Space::stat Senior::exercise(int option)
{
    stat newStat
    {
        0,        //happiness;
        10,        //health;
        0,          //money;
        0,          //expenses;
        0,         //knowledge;
    };
    cout << "You just showed off your breakdancing skill to the kids in the park and now you go to see the bone doctor just to be sure ... \n";
    cout << "\"The greatest wealth is health.\"- Virgil \n";
    return newStat;
}

/******************************************************************************
** Description: learn
******************************************************************************/
Space::stat Senior::learn(int option)
{
    stat newStat = Space::learn(option);
    switch (option) {
        case 1:
            cout << "You still think that it is never too old to go to college, to learn new things and explore the world around you. But these tests still suck.\n";
            cout << "\"How old do you have to be before you know what's going on?.\"- Calvin and Hobbes \n";
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
Space::stat Senior::play(int option)
{
    stat newStat = Space::play(option);
    switch (option) {
        case 1:
            cout << "I run out of humor ... \n";
            cout << "You think ...\n";
            //cout << "\"I don't need to \"get a life\". I'm a gamer. I have lots of lives.\"- Unknown \n";
            break;
        case 2:
            cout << "You clearly choose this option to see what I wrote here, you sick **** \n";
            cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            break;
        case 3:
            cout << "The casino director and top executive come out to greet you personally, celebrating your 1,000 visits and award you title- the most loyal customer ever.\n";
            cout << "You never win in gambling. Any win is temporary. \n";
            //cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            break;
        case 4:
            cout << "Interesting food tip for your bucket list: do you know that in some country, they eat goat penis in hot pot? \n";
            cout << "\"Adventure is out there.\"- Up \n";
            break;
            
    }
    return newStat;
}

/******************************************************************************
** Description: love
******************************************************************************/
Space::stat Senior::love(int option)
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

