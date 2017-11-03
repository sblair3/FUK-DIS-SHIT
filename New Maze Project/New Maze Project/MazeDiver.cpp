#include <iostream>
#include "list.h"
#include "maze.h"

#include "mazeCell.h"
#include <string>

using namespace std;

int maze::size;

std::vector<string> maze::end;

std::vector<short> maze::MakeSeeds;

std::string maze::currentcol;

std::string maze::updown;

int main()
{
	maze::size = 50;

	Makeupdown(maze::size);

	MakeVectorSeeds(maze::size);

	Makeupdown(maze::size);

	PrintMaze();

	system("pause");
	return 0;
}