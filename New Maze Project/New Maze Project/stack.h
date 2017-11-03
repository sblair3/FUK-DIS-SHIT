/*
stack.h
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The interface of the stack class.
*/

#ifndef STACK_H
#define STACK_H
#define NULL 0

#include "list.h"

class Stack
{
	// Private variables used to store information.
private:
	List linkedList;

public:

	// Public methods used to manipulate the inputted data.
	// Stack constructor which initializes the Stack object.
	Stack();
	// Stack destructor to remove the stack from memory.
	~Stack();
	// Pushes a new object onto the top of the stack.
	void push(int x, int y);
	// Pops the top object off of the stack and returns that object.
	Cell pop();
	// Clears the stack.
	void clear();
	// Returns true if the stack is empty and false if not empty.
	bool isEmpty();
	// Prints the stack.
	void printStack();

};

#endif
