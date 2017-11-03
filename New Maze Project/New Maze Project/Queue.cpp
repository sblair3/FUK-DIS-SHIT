/*
queue.cpp
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The implementations of the queue class.
*/


#include "queue.h"

Queue::Queue()
{
	linkedList = List();
}

Queue::~Queue()
{

}

bool Queue::isEmpty()
{
	return linkedList.isEmpty();
}

void Queue::Enqueue(int x, int y)
{
	linkedList.insert(x, y);
}

Cell Queue::dequeue()
{
	return linkedList.removeFirst();
}

void Queue::printQueue()
{
	linkedList.printList();
}