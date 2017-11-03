#ifndef CELL_H
#define CELL_H

struct Cell
{
	int xCoord;
	int yCoord;
	int visitStatus;
	int direction;
	int value;

	Cell(int directions, int vlaues, int rows, int col, int visitstat)
	{
		direction = directions;
		value = vlaues;
		xCoord = rows;
		yCoord = col;
		visitStatus = visitstat;
	}
	Cell(void)
	{
		xCoord = 0;
		yCoord = 0;
		visitStatus = 0;
		direction = 0;
		value = 0;
	}
};

#endif 

