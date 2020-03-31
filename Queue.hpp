/******************************************************************************
 **Program Name:   Queue. pp
 **Author:                 Long Mach
 **Date:                    11/04/19
** Description: This is the source file for Queue class, including:
- isEmpty: check if the list is empty
- addBack: add new space to the back of the list
- getFront: get the front space
- printQueue: print all space stage in the list for debugging.
 *******************************************************************************/
#ifndef QUEUE_hpp
#define QUEUE_hpp
#include <string>

#include "Menu.hpp"
#include "YoungAdult.hpp"
#include "Adult.hpp"
#include "MiddleAged.hpp"
#include "Senior.hpp"

class Queue
{
protected:
    Space *head;
    
public:
    Queue();
    ~Queue();
    
    // Check if queue is empty
    bool isEmpty();
    
    // Add new space to the back of the list
    void addBack(int period);
    
    // get the front space of the list
    Space *getFront();
    
    // debug function
    void printQueue();
    
};

#endif
