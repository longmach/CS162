/******************************************************************************
 **Program Name:   Queue. pp
 **Author:                 Long Mach
 **Date:                    11/04/19
** Description: This is the header file for Game class, including:
- playGame: run the game
- action: to run action that player choose
- result: result from above action
- cont: ask player if she wants to continue the game or not
- check: to check if win or lose.
 *******************************************************************************/
#ifndef GAME_hpp
#define GAME_hpp
#include <string>
#include <iomanip>
#include <algorithm>

#include "Queue.hpp"
#include "Player.hpp"

class Game
{
protected:
    Queue *newLife;
    Player *newPlayer;
    int timeTravel;     // check if player chose the time travel option or not
    int degree;         // check if player went to college or not
    int career;         // check if player started a new carreer or not
    int marriage;       // check if player married or not
    int work;           // check if player work or not in this space
    int treasureCount;
    
public:
    Game();
    ~Game();
    
    void playGame();
    Space::stat action(int option);
    void result(Space::stat newStat);
    void print();
    int cont();
    bool check();
    bool checkTreasure(string newTreasure);
};

#endif
