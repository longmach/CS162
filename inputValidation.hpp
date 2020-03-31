/******************************************************************************
** Description: This is the header file for the validateInput() function, 
**              which validates user input to ensure that the input is a 
**              non-negative integer within a specified range. The function 
**              is passed three arguments: input string from the user, a 
**              minimum integer, and a maximum integer. The function returns
**              true if the input has been valided and false otherwise. 
******************************************************************************/
#ifndef INPUT_VALIDATION_hpp
#define INPUT_VALIDATION_hpp
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool validateInput(string, int, int);

#endif
