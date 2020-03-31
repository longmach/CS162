/******************************************************************************
** Program Name:    MiddleAged.hpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the header file for MiddleAged class with
similar functions that call Space class function with addition information.
******************************************************************************/
#ifndef MIDDLEAGED_hpp
#define MIDDLEAGED_hpp

#include "Space.hpp"

class MiddleAged: public Space
{
protected:

public:
    MiddleAged();
    ~MiddleAged();
    
    stat work(int option);
    stat exercise(int option);
    stat learn(int option);
    stat play(int option);
    stat love(int option);
};

#endif
