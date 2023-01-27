/**
 * file:            LinkedList.h
 * author:          Bryan Fischer
 * date:            01-27-2023
 * description:     Header file for our Linked List class.
 * 
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

class LinkedList{

    public:

        /**
         * Function:    Default constructor
         * Params:      None
         * Return:      None
         * Description: Default constructor for the Linked list class.
         *              Sets the head and tail to nullptr, and size to 0.
         */
        LinkedList();

        /**
         * Function:    Parameterized constructor
         * Params:      Node object that is not null
         * Return:      None
         * Description: Parameterized constructor for the Linked list class.
         *              Sets the head and tail to nullptr, and size to 0.
         */
        LinkedList(Node node);

        /**
         * Function:    removeByIndex
         * Params:      Integer representing the index that we want to remove from our
         *                  Linked List. Indexing begins at 0 (the first node in our list
         *                  is index 0)
         * Return:      void
         * Description: Deletes a node from our linked list at a given index.
         *              Size of the linked list is also updated.
         */
        void removeByIndex(int index);

        /**
         * Function:    removeByValue
         * Params:      Integer representing the value that we want to remove from our
         *                  Linked List. Values are stored in each Node object.
         * Return:      void
         * Description: Deletes a node from our linked list that has a given value.
         *                  If multiple a value occurs more than once in the list,
         *                  remove all occurances of Nodes with that value.
         *                  Size of the linked list is also updated.
         */
        void removeByValue(int val);

        /**
         * Function:    insertValue
         * Params:      Integer representing the index where a new node will be inserted.
         *              Integer representing the value that we want to add.
         * Return:      void
         * Description: Inserts a new node with a value (val) at the given index in our Linked List.
         *              Size of the linked list is also updated.
         */
        void insertValue(int index, int val);

        /**
         * Function:    findValue
         * Params:      Integer representing the value we are looking for in the list.
         * Return:      bool - true if value is found in the list, false if the value is not found in the list.
         * Description: Performs a linear search of the linked list looking for the given value.
         *              If the value does not exist in the list, function returns false, else true.
         *              If more than one value exists in the list, return true upon see the first occurance.
         */
        bool findValue(int val) const;

        /**
         * Function:    getValue
         * Params:      Integer representing the index we are looking at in the list.
         * Return:      int - the value of the node at the given index.
         *                  if the index is invalid for a given list, print a message as such and return -1
         * Description: Accesses the value of a node at the given index and returns that value to the caller.
         *                  We are using 0-based indexing.
         */
        int getValue(int index) const;

        /**
         * Function:    addToFront
         * Params:      Integer representing the value that we want to add.
         * Return:      void
         * Description: Inserts a new node with a value (val) at the beginning of our Linked List.
         *              Size of the linked list is also updated.
         */
        void addToFront(int val);

        /**
         * Function:    addToEnd
         * Params:      Integer representing the value that we want to add.
         * Return:      void
         * Description: Inserts a new node with a value (val) at the end of our Linked List.
         *              Size of the linked list is also updated.
         */
        void addToEnd(int val);

        /**
         * Function:    getSize
         * Params:      none
         * Return:      Integer representing the size of our Linked List.
         * Description: Accessor function to return the current size of our Linked List.
         */
        int getSize() const;

        /**
         * Function:    printList
         * Params:      none
         * Return:      void
         * Description: Pretty-prints the linked list to the console. You may chose to print
         *                  using a style of your choice, but the state of the list should be
         *                  easily readable. You may chose to model it after mine:
         *                  Examples:
         * 
         *                  -An empty list:
         *                  $Size = 0
         *                  $[nullptr]
         * 
         *                  -A list with a single node:
         *                  $Size = 1
         *                  $[42]->[nullptr]
         * 
         *                  -A list with 3 nodes:
         *                  $Size = 3
         *                  $[42]->[17]->[32]->[nullptr]
         */
        void printList() const;

        /**
         * Function:    getMaxValueSlow
         * Params:      none
         * Return:      Integer representing the largest value in our Linked List.
         * Description: Accessor function to return the largest value in our Linked List.
         *                  This function performs a linear search of the list, searching
         *                  for the largest value.
         */
        int getMaxValueSlow() const;

        /**
         * Function:    getMaxValueFast
         * Params:      none
         * Return:      Integer representing the largest value in our Linked List.
         * Description: Accessor function to return the largest value in our Linked List.
         *                  This function does not perform a linear search of the list,
         *                  instead you must come up with another way to find the largest
         *                  value. This function should find the largest value faster than
         *                  the previous getMaxValueSlow function, and can be tested using
         *                  a sufficiently large Linked List and the linux "time" command.
         */
        int getMaxValueFast() const;


    protected:


    private:

        //data members to store the head, tail, and size of the Linked List.
        Node *head;
        Node *tail;
        int size;
        

};


#endif