/******************************************************************************
 **Program Name:    Player.cpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for Player Class.
it contains all player's stats and following functions
- setSpace: move the player object to a new space
- getSpace: get the player object’s current space
- setFor: move forward to the next 5 years
- setBack: move back 5 years to the past
- Intro: different intro for different age group

******************************************************************************/
#include "Player.hpp"

/******************************************************************************
** Description: constructor
******************************************************************************/

Player::Player(Space *newPointer)
{
    prevAsset = prevTreasure = 0;
    age = 20;
    happiness = 100;
    health = 100;
    money = 0;
    income = 0;
    expenses = 150000;
    knowledge = 100;
    pointer = newPointer;
    
    previous = {
        age,
        happiness,
        health,
        interest,
        money,
        expenses,
        income,
        knowledge
    };

}

/******************************************************************************
** Description: setters
******************************************************************************/
void Player::setAgeGroup(string newGroup)
{
    ageGroup = newGroup;
}

void Player::setAge(int inputAge)
{
    age = inputAge;
}

void Player::setHappy(int happy)
{
    happiness = happy;
}

void Player::setHeath(int hp)
{
    health = hp;
}

void Player::setExpense(int exp)
{
    expenses = exp;
}


void Player::setKnowledge(int know)
{
    knowledge = know;
}

void Player::setSpace(Space *newPointer)
{
    pointer = newPointer;
}

/******************************************************************************
** Description: Getters
******************************************************************************/
string Player::getAgeGroup()
{
    return ageGroup;
}

int Player::getAge()
{
    return age;
}

int Player::getHappy()
{
    return happiness;
}

int Player::getHealth()
{
    return health;
}

int Player::getMoney()
{
    return money;
}

int Player::getExpense()
{
    return expenses;
}

int Player::getIncome()
{
    return income;
}

int Player::getKnowledge()
{
    return knowledge;
}

Space *Player::getSpace()
{
    return pointer;
}

/******************************************************************************
** Description: move forward 5 years, set the current stat to the prev stats
 and modify stat correctly
******************************************************************************/
void Player::setFor()
{
    previous.at(0) = age;
    previous.at(1) = happiness;
    previous.at(2) = health;
    previous.at(3) = interest;
    previous.at(4) = money;
    previous.at(5) = expenses;
    previous.at(6) = income;
    previous.at(7) = knowledge;
    prevTreasure = treasure.size();
    prevAsset = asset.size();
    pointer = pointer->right;
    age += 5;
    happiness -= 10;
    if (happiness < 50)
    {
        health -= 20;
    }
    if (health < 50)
    {
        happiness -= 20;
    }
}

/******************************************************************************
** Description: time travel back 5 years, reset all the stat, assets and treasures
******************************************************************************/
void Player::setBack()
{
    pointer = pointer->left;
    age = previous.at(0);
    happiness = previous.at(1);
    health = previous.at(2);
    interest = previous.at(3);
    money = previous.at(4);
    expenses = previous.at(5);
    income = previous.at(6);
    knowledge = previous.at(7);
    int recentAdd1 = treasure.size() - prevTreasure;
    int recentAdd2 = asset.size() - prevAsset;
    removeTreasure(recentAdd1);
    removeAsset(recentAdd2);
}

/******************************************************************************
** Description: intro for different space (stage)
******************************************************************************/
void Player::intro(int stage)
{
    switch (stage) {
        case 1:
            cout << "You are " << age << " year old this year, full of energy and passion, ready to explore the big wide world and to have wonderful adventure. Please choose 3 things that you want to focus on for the next 5 years. \n";
            break;
        case 2:
            cout << "You are " << age << " year old this year. Maturity means you appreciate more little things in life all around you. Please choose 3 things that you want to focus on for the next 5 years. \n";
            break;
        case 3:
            cout << "You are " << age << " year old this year, not all of your friends and acquantaince are lucky enough to live until your age so you treasure every moment while you still can. Please choose 3 things that you want to focus on for the next 5 years. \n";
            break;
        case 4:
            cout << "You are "<< age << " year old this year. The past and its memory can be distant but also beautiful, but you only live in the moment to, ready for the next adventure. Please choose 3 things that you want to focus on for the next 5 years. \n";
            break;
    }
    
}

/******************************************************************************
** Description: add new treasure to the back of the list
******************************************************************************/
void Player::addTreasure(string newTreasure)
{
    treasure.push_back(newTreasure);
}

/******************************************************************************
** Description: add new asset to the back of the list
******************************************************************************/
void Player::addAsset(string newAsset)
{
    asset.push_back(newAsset);
}

/******************************************************************************
** Description: remove all recent added treasures
******************************************************************************/
void Player::removeTreasure(int recentAdd)
{
    for (int i = 0; i < recentAdd; i++)
    {
        treasure.pop_back();
    }
}

/******************************************************************************
** Description: remove all recent added assets
******************************************************************************/
void Player::removeAsset(int recentAdd)
{
    for (int i = 0; i < recentAdd; i++)
    {
        asset.pop_back();
    }
}

/******************************************************************************
** Description: print all treasures
******************************************************************************/
void Player::printTreasure()
{
    std::copy(treasure.begin(), treasure.end(), std::ostream_iterator<string>(std::cout, " "));
}

/******************************************************************************
** Description: print assets
******************************************************************************/
void Player::printAsset()
{
    std::copy(asset.begin(), asset.end(), std::ostream_iterator<string>(std::cout, " "));
}

/******************************************************************************
** Description: calculate income if work
******************************************************************************/
void Player::setIncome()
{
    income = (health + happiness)/200.0 * 2000 * knowledge;
}

/******************************************************************************
** Description: calculate money available and interest
******************************************************************************/
void Player::setMoney()
{
    interest = money * 0.5;
    money = money * 1.5;
    money += (income - expenses);
}
