/******************************************************************************
 **Program Name:    Character.hpp
  **Author:          Long Mach
  **Date:            10/29/19
 ** Description: This is the source file for Space Class.
 *Key data members:
 - 4 pointers to 4 directions
 *Key functions:
 - 5 interactive functions for the player to choose from
******************************************************************************/
#ifndef SPACE_hpp
#define SPACE_hpp
#include <string>
#include <random>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Space
{
protected:
    int stage;
    Space *top;
    Space *right;
    Space *left;
    Space *bottom;
    
    struct stat {
        int happiness;
        int health;
        int money;
        int expenses;
        int knowledge;
    };
    
    friend class Queue;
    friend class Player;
    friend class Game;
    
public:
    //Space(Player);
    Space();
    
    // pure virtual destructor
    virtual ~Space() = 0;
    
    // getters
    void setStage(int newStage);
    int getStage();
    
    virtual stat learn(int option);
    virtual stat play(int option);
    virtual stat love(int option);
    virtual stat work(int option);
    virtual stat exercise(int option);
};

#endif
