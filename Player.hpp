/******************************************************************************
 **Program Name:    Character.hpp
  **Author:          Long Mach
  **Date:            10/29/19
 ** Description: This is the source file for Character Class. Character has
 some member data: attack, defense, armor, and strength points, attack and defense dice.
  *getters, virtual destructor and pure attack, defense function.

******************************************************************************/
#ifndef PLAYER_hpp
#define PLAYER_hpp
#include <string>
#include <random>
#include <iostream>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
#include <vector>
#include "Space.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Player
{
protected:
    string ageGroup;
    int age;
    int happiness;
    int health;
    int interest;
    int money;
    int expenses;
    int income;
    int knowledge;
    std::vector<int> previous;
    int prevAsset;
    int prevTreasure;
    Space *pointer;
    std::vector<string> treasure;
    std::vector<string> asset;

    friend class Game;
    
public:
    Player(Space *newPointer);
    
    //setters
    void setAgeGroup(string newGroup);
    void setAge(int inputAge);
    void setHappy(int happy);
    void setHeath(int hp);
    void setMoney();
    void setExpense(int exp);
    void setIncome();
    void setKnowledge(int know);
    void setSpace(Space *newPointer);

    //getters
    string getAgeGroup();
    int getAge();
    int getHappy();
    int getHealth();
    int getMoney();
    int getExpense();
    int getIncome();
    int getKnowledge();
    Space *getSpace();
    
    // move forward and backward
    void setFor();
    void setBack();
    
    void intro(int stage);
    void addTreasure(string newTreasure);
    void addAsset(string newAsset);
    void removeTreasure(int num);
    void removeAsset(int num);
    void printTreasure();
    void printAsset();
};

#endif
