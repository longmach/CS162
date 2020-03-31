/******************************************************************************
** Program Name:    YoungAdult.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the header file for  YoungAdult class with
similar functions that call Space class function with addition information.
 ******************************************************************************/
#include "YoungAdult.hpp"


/******************************************************************************
** Description: Constructor
******************************************************************************/

YoungAdult::YoungAdult() : Space()
{
    stage = 1;
}

/******************************************************************************
** Description: destructor
******************************************************************************/
YoungAdult::~YoungAdult()
{
}

/******************************************************************************
** Description: work
******************************************************************************/

Space::stat YoungAdult::work(int option)
{
    stat newStat = Space::work(option);
    cout << "Devote your life to your company and they will pay you tenfold (just kidding!) \n";
    cout << "\"To infinity ... and beyond!\" –Toy Story \n";
    //cout << "\"Find something you love to do and you’ll never have to work a day in your life.\"- Unknown \n";
    return newStat;
}

/******************************************************************************
** Description: learn
******************************************************************************/
Space::stat YoungAdult::learn(int option)
{
    stat newStat = Space::learn(option);
    switch (option) {
        case 1:
            cout << "You go to college and it offers more career and salary options, but it takes time and puts you in debt (100k). \n";
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
Space::stat YoungAdult::play(int option)
{
    stat newStat = Space::play(option);
    switch (option) {
        case 1:
            cout << "You are the life of every party you have ever attended \n";
            cout << "You think ...\n";
            break;
        case 2:
            cout << "An iToilet plated with fake gold and cheap diamons on sale for 50%, only 100k, sweet! \n";
            cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            break;
        case 3:
            cout << "My god, you just win 10k easily in Las Vegas, may be you should focus more on this \n";
            break;
        case 4:
            cout << "Traveling expands your minds and enlarges your heart. The world is truly big and wonderful. So is your instagram account. \n";
            cout << "\"Adventure is out there.\"- Up \n";
            break;
            
    }
    return newStat;
}

/******************************************************************************
** Description: love
******************************************************************************/
Space::stat YoungAdult::love(int option)
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

/******************************************************************************
** Description: exercise
******************************************************************************/
Space::stat YoungAdult::exercise(int option)
{
    stat newStat = Space::exercise(option);
    cout << "Enjoy a physical activity at least 30 mins, 3 times a week ... \n";
    cout << "\"The greatest wealth is health.\"- Virgil \n";
    return newStat;
}
