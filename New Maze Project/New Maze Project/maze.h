#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <cstdio>
#include <random>

using namespace std;
using std::cout;

#ifndef MAZE_H
#define MAZE_H
#define NULL 0



using std::string;

class maze
{
public:
	static string updown;
	static string currentcol;
	static std::vector <string> end;
	static std::vector<short> MakeSeeds;
	static int size;
};

static void sides(int x);
static void Check(std::vector<short> & reference, int x);
static void Makeupdown(int size);
static void PrintMaze();
static void MakeVectorSeeds(int x)
{
	srand(time_t(NULL));

	for (int i = 0; i < x; i++)
	{
		int randnum = (1 + rand() % 65);
		Check(maze::MakeSeeds, randnum);
	}

	sides(maze::size);
	return;
}
static void sides(int x)
{
	int i1(0);

	int i2(0);

	int randI(0);

	char walls = '1';
	char path = '0';

	while (i1 < x)
	{
		maze::currentcol.clear();

		maze::currentcol.push_back(walls);

		i2 = 0;

		while (i2 < x)
		{
			srand((int)maze::MakeSeeds.at(i1));

			int randg = (1 + rand() % 85);

			string SN = "0." + std::to_string(randg);

			std::random_device device;

			std::mt19937 gen(device());

			std::bernoulli_distribution rand(std::stod(SN));

			bool outcome = rand(gen);

			if (outcome == false)
			{
				path = '0';
			}
			else
			{
				path = '1';
			}

			maze::currentcol.push_back(path);

			i2++;
		}

		maze::currentcol.push_back(walls);

		maze::end.push_back(maze::currentcol);

		i1++;
	}

};

static void Check(std::vector<short> & reference, int x)
{
	if (std::find(reference.begin(), reference.end(), x) != reference.end())
	{
		int random = (1 + rand() % (maze::size + 9));

		Check(reference, random);
	}
	else
	{
		reference.push_back(x);
	}
}


static void Makeupdown(int size)
{
	if (maze::updown == "")
	{
		int i = 0;

		int it = size + 2;

		char wall = '1';

		while (i < it)
		{
			maze::updown.push_back(wall);

			i++;
		}
	}
}

static void PrintMaze()
{
	for (size_t r = 0; r < maze::end.size(); r++)
	{
		for (size_t c = 0; c < maze::end[r].size(); c++)
		{
			cout << maze::end[r][c];

			if (c != 0 && (maze::size / c) == 0)
			{
				cout << "\n";
			}
		}
	}
}

#endif

