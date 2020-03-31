/******************************************************************************
 **Program Name:   Queue.cpp
 **Author:                 Long Mach
 **Date:                    11/04/19
** Description: This is the source file for Queue class, including:
- isEmpty: check if the list is empty
- addBack: add new space to the back of the list
- getFront: get the front space
- printQueue: print all space stage in the list for debugging.
******************************************************************************/
#include "Queue.hpp"

/******************************************************************************
** Description: constructor
******************************************************************************/

Queue::Queue()
{
    head = nullptr;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            addBack(i);
        }
    }
    
}

/******************************************************************************
** Description: Destructor, deallocate dynamic memory allocation.
******************************************************************************/

Queue::~Queue()
{
    while (!isEmpty())
    {
        Space *newNode = head;
        head = newNode->right;
        // if there are 2 or more nodes
        if (newNode != newNode->right)
        {
                    
                    newNode -> right -> left = newNode->left;
                    newNode -> left -> right = newNode->right;
                }
                // if only 1 node
                else
                {
                    head = nullptr;
                }
        delete newNode;
    }
}

/******************************************************************************
** Description: Check if queue is empty
******************************************************************************/
bool Queue::isEmpty()
{
    if (head)
    {
        return false;
    }
    return true;
}

/******************************************************************************
** Description: Add new space to the back of the list
******************************************************************************/
void Queue::addBack(int period)
{
    Space *temp = nullptr;
    
    // dynamic allocation of new character
    switch (period)
    {
        case 1:
            temp = new YoungAdult;
            break;
        case 2:
            temp = new Adult;
            break;
        case 3:
            temp = new MiddleAged;
            break;
        case 4:
            temp = new Senior;
            break;
    }
    
    if (isEmpty())
    {
        head = temp->left = temp->right = temp;
        
        // set 2 unused pointers to null
        temp->top = temp->bottom = nullptr;
    }
    
    else
    {
        Space *last = head->left;
        
        temp->right = head;
        temp->left = last;
        head->left = temp;
        last->right = temp;
        
        // set 2 unused pointers to null
        temp->top = temp->bottom = nullptr;
    }
}

/******************************************************************************
** Description: get the front space of the list
******************************************************************************/
Space *Queue::getFront()
{
    return head;
}

/******************************************************************************
** Description: Print all the stage of the space in the list for debugging
******************************************************************************/
void Queue::printQueue()
{
    Space *temp = head;
    // if list is not empty
    if (!isEmpty())
    {
        // print the list
        while(temp->right != head)
        {
            cout << temp->getStage() << "  ";
            temp = temp->right;
        }
        // print the final node
        cout << temp->getStage();
        cout << endl;
    }
    else
    {
        cout << "The list is empty! \n";
    }
}

