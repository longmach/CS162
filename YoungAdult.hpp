/******************************************************************************
** Program Name:    YoungAdult.hpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the source file for YoungAdult class with
 similar functions that call Space class function with addition information.
******************************************************************************/
#ifndef YOUNGADULT_hpp
#define YOUNGADULT_hpp

#include "Space.hpp"

class YoungAdult: public Space
{
protected:

public:
    YoungAdult();
    ~YoungAdult();
    
    stat work(int option);
    stat learn(int option);
    stat play(int option);
    stat love(int option);
    stat exercise(int option);
};

#endif
