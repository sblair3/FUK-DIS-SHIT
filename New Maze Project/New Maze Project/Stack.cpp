/*
stack.cpp
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The implementations of the stack class.
*/


#include "stack.h"


Stack::Stack()
{
	linkedList = List();
}

Stack::~Stack()
{

}

void Stack::push(int x, int y)
{
	linkedList.insert(x, y);
}

Cell Stack::pop()
{
	return linkedList.removeLast();
}

void Stack::clear()
{
	linkedList.makeEmpty();
}

bool Stack::isEmpty()
{
	return linkedList.isEmpty();
}

void Stack::printStack()
{
	linkedList.printList();
}