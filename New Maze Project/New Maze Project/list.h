/*
list.h
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The interface of the list class.
*/

#ifndef LIST_H
#define LIST_H
#define NULL 0


#include "mazeCell.h"
#include <iostream>

using std::cout;

class List
{
private:
	Cell *head;
	Cell *current;
	Cell *tail;

public:
	// Allocates a default list.
	List();
	// Deletes the list from memory.
	~List();
	// Prints the contents of the list.
	void printList();
	// Empties the list.
	void makeEmpty();
	// If the list is empty, return true, else return false.
	bool isEmpty();
	// Inserts an object into a defined position.
	void insert(int x, int y);
	// Removes an object from the list.
	void remove(int x, int y);
	// Removes the first element added to the list.
	Cell removeFirst();
	// Removes the last element added to the list.
	Cell removeLast();
};

#endif
