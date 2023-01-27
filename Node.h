/**
 * file:            Node.h
 * author:          Bryan Fischer
 * date:            01-27-2023
 * description:     Header file for our Node class
 */

//header guards
#ifndef NODE_H
#define NODE_H

class Node{

    public:
        /**
         * Function:    Default constructor
         * Params:      None
         * Return:      None
         * Description: Default constructor for the Node class.
         *              Initializes the value data member to 0, sets next node pointer
         *                  to nullptr.
         */
        Node();

        /**
         * Function:    Parameterized constructor
         * Params:      Integer representing the initial value of our private value data member.
         * Return:      None
         * Description: EVC for the Node class.
         *              Initializes the value data member to param initValue, sets next node pointer
         *                  to nullptr.
         */
        explicit Node(int initValue);

        /**
         * Function:    getValue
         * Params:      None
         * Return:      Integer representing the value of the node.
         * Description: Accessor function to obtain the value of the node.
         */
        int getValue() const;

        // Pointer to the next node
        Node * next;

    protected:

    private:

        //private data member for our node class
        const int value;
};

#endif