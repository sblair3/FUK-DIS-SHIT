/*
queue.h
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The interface of the queue class.
*/

#ifndef QUEUE_H
#define QUEUE_H
#define NULL 0

#include "list.h"

class Queue
{
	// Private variables used for storing information.
private:
	List linkedList;

public:
	// Public methods used to manipulate the inputted data.
	// Queue constructor which initializes the Queue.
	Queue();
	// Queue destructor to remove the queue from memory.
	~Queue();
	// Returns true if the queue is empty and false if not empty.
	bool isEmpty();
	// Inserts an item at the rear of the queue.
	void Enqueue(int x, int y);
	// Removes an item in the front of the queue and returns that object.
	Cell dequeue();
	// Prints the current queue.
	void printQueue();
};

#endif
