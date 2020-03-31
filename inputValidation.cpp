/******************************************************************************
** Description: This is the header file for the validateInput() function, 
**              which validates user input to ensure that the input is a 
**              non-negative integer within a specified range. The function 
**              is passed three arguments: input string from the user, a 
**              minimum integer, and a maximum integer. The function returns
**              true if the input has been valided and false otherwise. 
******************************************************************************/
#include "inputValidation.hpp"

bool validateInput(string input, int minVal, int maxVal){
    
    bool isValid = true; 
    
    //user presses <Enter> with nothing entered
    if(input.length() == 0){
        cout << "*You didn't enter any value. Please try again." << endl;
        return false;
    }

    //determine if any input is not 0-9
    for(int i = 0; i < input.length(); i++){
        if(!isdigit(input[i])){                  
            isValid = false;
        }
    }
    if(!isValid){
        cout << "*You entered invalid characters. Please try again." << endl;
    }
    
    //convert string to int
    if(isValid){                               
        int strToInt = std::stoi(input, NULL, 10);   

        //check if outside valid range
        if(strToInt < minVal){
            cout << "Value entered is too low. Please try again." << endl;
            isValid = false;
        }
        if(strToInt > maxVal){
            cout << "Value entered is too high. Please try again." << endl;
            isValid = false;
        }
    } 
    return isValid;   
}
