/*
test_queue.cpp
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The test file for the queue class.
*/

#include "stdafx.h"
#include "queue.h"

int main()
{
	int index = 0;
	Queue newQueue = Queue();

	// Print the empty queue.
	newQueue.printQueue();

	// Check if the queue is empty.
	if (newQueue.isEmpty())
	{
		cout << "The queue is currently empty.\n";
	}
	else
	{
		cout << "The queue is not currently empty.\n";
	}

	// Insert mazeCells into the queue.
	while (index < 5)
	{
		newQueue.Enqueue(rand() % 100, rand() % 100);
		index++;
	}

	// Print the current queue.
	newQueue.printQueue();

	// Dequeue the first element in the queue.
	newQueue.dequeue();
	newQueue.printQueue();

	// Check if the queue is empty.
	if (newQueue.isEmpty())
	{
		cout << "The queue is currently empty.\n";
	}
	else
	{
		cout << "The queue is not currently empty.\n";
	}
}