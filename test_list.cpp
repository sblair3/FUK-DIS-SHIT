/*
test_list.cpp
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The test file for the list class.
*/

#include "stdafx.h"
#include "list.h"

//int main()
//{
//	List newList = List();
//	int index = 0;
//
//	// Print the empty list.
//	newList.printList();
//
//	// Check if the list is empty.
//	if (newList.isEmpty())
//	{
//		cout << "The list is currently empty.\n";
//	}
//	else
//	{
//		cout << "The list is not empty.\n";
//	}
//
//	// Insert 5 Maze cells into the list and print the list.
//	newList.insert(22, 30);
//	newList.insert(17, 27);
//	newList.insert(30, 30);
//	while (index < 2)
//	{
//		newList.insert(rand() % 100, rand() % 100);
//		index++;
//	}
//	newList.printList();
//
//	// Remove the first element of the list and print the list.
//	newList.remove(22, 30);
//	newList.printList();
//
//	// Remove an element from the middle of the list.
//	newList.remove(30, 30);
//	newList.printList();
//
//	// Remove an element from the end of the list.
//	newList.insert(50, 50);
//	newList.printList();
//	newList.remove(50, 50);
//	newList.printList();
//
//	// Check if the list is empty.
//	if (newList.isEmpty())
//	{
//		cout << "The list is currently empty.\n";
//	}
//	else
//	{
//		cout << "The list is not empty.\n";
//	}
//
//	// Attempt to remove an element that is not in the list.
//	newList.remove(234, 30);
//	newList.printList();
//
//	// Remove the last element of the list.
//	newList.removeLast();
//	newList.printList();
//
//	// Remove the first element of the list.
//	newList.removeFirst();
//	newList.printList();
//
//	// Insert 5 Maze cells into the list and print the list.
//	newList.insert(22, 30);
//	newList.insert(17, 27);
//	newList.insert(30, 30);
//	newList.printList();
//	
//	// Make the list empty and then print the empty list.
//	newList.makeEmpty();
//	newList.printList();
//}