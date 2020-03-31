/******************************************************************************
** Program Name:    Adult.hpp
 **Author:          Long Mach
 **Date:            10/29/19
** Description: This is the header file for Adult class with
similar functions that call Space class function with addition information.
******************************************************************************/
#ifndef ADULT_hpp
#define ADULT_hpp

#include "Space.hpp"

class Adult: public Space
{
protected:

public:
    Adult();
    ~Adult();
    
    stat work(int option);
    stat learn(int option);
    stat play(int option);
    stat love(int option);
    stat exercise(int option);
};

#endif
