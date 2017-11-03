/*
mazeCell.h
Sam Blair and Easton Tuttle
Computer Science II
Homework 2/3
September 29, 2017

The interface of the mazeCell class.
*/

#ifndef MAZECELL_H
#define MAZECELL_H
#define NULL 0

// Structure that holds the information of each maze cell.

struct Cell
{
	int xCoord;
	int yCoord;
	int visitStatus;
	int direction;
	int value;
	struct Cell *nextCell;
	struct Cell *prevCell;
	Cell(int directions, int vlaues, int rows, int col, int visitstat)
	{
		direction = directions;
		value = vlaues;
		xCoord = rows;
		yCoord = col;
		visitStatus = visitstat;
		
		nextCell = NULL;
		prevCell = NULL;
	}
	Cell(void)
	{
		xCoord = 0;
		yCoord = 0;
		visitStatus = 0;
		direction = 0;
		value = 0;
		nextCell = NULL;
		prevCell = NULL;
	}
};

#endif
