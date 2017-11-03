/*
list.cpp
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The implementations of the list class.
*/


#include "list.h"

List::List()
{
	head = new Cell();
	current = head;
	tail = head;
}


List::~List()
{

}


void List::printList()
{
	current = head->nextCell;
	if (current == NULL)
	{
		cout << "The list currently contains: \n";
	}
	else
	{
		cout << "The list currently contains: ";
		while (current->nextCell != NULL)
		{
			cout << "(" << current->xCoord << "," << current->yCoord << ") ";
			current = current->nextCell;
		}
		cout << "(" << current->xCoord << "," << current->yCoord << ")\n";
	}
}

void List::makeEmpty()
{
	/*head->xCoordinate = NULL;
	head->yCoordinate = NULL;*/
	head->nextCell = NULL;
}

bool List::isEmpty()
{
	if (head->nextCell == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void List::insert(int x, int y)
{
	Cell *newCell = new Cell(0,0,x, y,0);
	tail->nextCell = newCell;
	newCell->prevCell = tail;
	tail = newCell;
}

void List::remove(int x, int y)
{
	if (head != NULL)
	{
		current = head;
		while (current->nextCell != NULL)
		{
			if (current->xCoord == x && current->yCoord == y)
			{
				if (current->prevCell == NULL)
				{
					head = current->nextCell;
				}
				else
				{
					Cell *temp;
					temp = current->nextCell;
					current = current->prevCell;
					current->nextCell = temp;
					temp->prevCell = current;
				}
			}
			current = current->nextCell;
		}
		if (tail->xCoord == x && tail->yCoord == y)
		{
			tail = tail->prevCell;
			tail->nextCell = NULL;
		}
	}
	else
	{
		return;
	}
}

Cell List::removeFirst()
{
	Cell *tempCell;
	tempCell = head;
	head = head->nextCell;
	head->prevCell = NULL;
	return *tempCell;
}

Cell List::removeLast()
{
	Cell *tempCell;
	tempCell = tail;
	tail = tail->prevCell;
	tail->nextCell = NULL;
	return *tempCell;
}