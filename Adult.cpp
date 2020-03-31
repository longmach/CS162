/******************************************************************************
** Program Name:    Adult.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for Adult class with
similar functions that call Space class function with addition information.
 ******************************************************************************/
#include "Adult.hpp"


/******************************************************************************
** Description: Constructor
******************************************************************************/

//Child::Child(Player newPlayer) : Space(newPlayer)
Adult::Adult() : Space()
{
    stage = 2;
}

/******************************************************************************
** Description: destructor
******************************************************************************/
Adult::~Adult()
{
}

/******************************************************************************
** Description: work
******************************************************************************/

Space::stat Adult::work(int option)
{
    stat newStat = Space::work(option);
    cout << "Work harder everyday hopping your boss will finally notice your presence. \n";
    cout << "\"Find something you love to do and you’ll never have to work a day in your life.\"- Unknown \n";
    return newStat;
}

/******************************************************************************
** Description: learn
******************************************************************************/
Space::stat Adult::learn(int option)
{
    stat newStat = Space::learn(option);
    switch (option) {
        case 1:
            cout << "You go to college and it offers more career and salary options, but it takes time and puts you in debt (150k). \n";
            cout << "\"How old do you have to be before you know what's going on?.\"- Calvin and Hobbes \n";
            newStat.money = -150000;
            break;
        case 2:
            cout << "Can I play some videos game now? \n";
            cout << "I really could not find a good quote here. Sorry!\n";
            break;
    }
    return newStat;
}

/******************************************************************************
** Description: play
******************************************************************************/
Space::stat Adult::play(int option)
{
    stat newStat = Space::play(option);
    switch (option) {
        case 1:
            cout << "When you grow up, you realize only kids do weeds. Your taste is refied so now you use methamphetamine before the party. \n";
            cout << "\"We’re done when I say we’re done.\"- Walter White \n";
            newStat.happiness = -20;
            newStat.health = -30;
            newStat.money = 0;
            newStat.expenses = 50000;
            newStat.knowledge = 0;
            break;
        case 2:
            cout << "An 200 inches TV on sale for 60%, you spouse sure love it. (only 150k on Black Friday) \n";
            cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.happiness = -10;
            newStat.money = -150000;
            break;
        case 3:
            cout << "You might be a bit more lucky next time. At least you only loose 200k this time, things could be worse. \n";
            //cout << "\"Buy thing you don't need with money you don't have to impress people you don't like.\"- Unknown \n";
            newStat.happiness = -20;
            newStat.health = -20;
            newStat.money = 10000;
            newStat.expenses = 0;
            newStat.knowledge = 0;
            break;
        case 4:
            cout << "Do you know? You spend 5% of your travel time to enjoy amazing food, 5% to meet wonderful people, and only 90% to take thousand of photos for your girl's instagram account. \n";
            cout << "\"Adventure is out there.\"- Up \n";
            break;
            
    }
    return newStat;
}

/******************************************************************************
** Description: love
******************************************************************************/
Space::stat Adult::love(int option)
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
Space::stat Adult::exercise(int option)
{
    stat newStat = Space::exercise(option);
    cout << "Enjoy a physical activity at least 30 mins, 3 times a week ... \n";
    cout << "\"The greatest wealth is health.\"- Virgil \n";
    return newStat;
}


