/******************************************************************************
** Program Name:    Senior.hpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the header file for Senior class with
similar functions that call Space class function with addition information.
******************************************************************************/
#ifndef SENIOR_hpp
#define SENIOR_hpp

#include "Space.hpp"

class Senior: public Space
{
protected:

public:
    //Child(Player);
    Senior();
    ~Senior();
    
    stat work(int option);
    stat exercise(int option);
    stat learn(int option);
    stat play(int option);
    stat love(int option);
};

#endif
