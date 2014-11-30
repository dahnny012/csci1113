// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "forest.h"
#include "tree.h"
#include "pine.h"
#include "oak.h"

using namespace std;

Forest::Forest()
{
	srand(time(0));
		for(int j = 0; j < 21; j++)
		{
			grid[j][0] = new Tree("not a tree", 0.0, 0, 1.0, 1);
			grid[j][20] = new Tree("not a tree", 0.0, 0, 1.0, 1);
			grid[0][j] = new Tree("not a tree", 0.0, 0, 1.0, 1);
			grid[20][j] = new Tree("not a tree", 0.0, 0, 1.0, 1);
		}
	
	
	for(int n = 1; n < 20; n++)
	{
		for(int m = 1; m < 20; m++)
		{
			if (m % 2 == 0)
				{
					grid[n][m] = new Pine("pine" , .5 , 1 , 1.0 , 1);
				}
			else
				{
					grid[n][m] = new Oak("oak" , .5 , 1 , 1.0 , 1);
				}
		}
	}
	
	grid[10][10] = new Tree("burning tree", 1.0, 2, 1.0, 1);
	
	
}

ostream& operator << (ostream& output, Forest& arg)
{
	
	for(int i = 0; i < 21; i++)
	{
		for(int j = 0; j < 21; j++)
		{
			if(arg.grid[i][j]->getStatus() == 0)
			output << "\033[0;40m " << " ";
			if(arg.grid[i][j]->getStatus() == 1)
			
			 arg.grid[i][j]->showSymbol(output);
			if(arg.grid[i][j]->getStatus() == 2)
			output << "\033[91;40m#" << " ";
			if(arg.grid[i][j]->getStatus() == 3)
			output << "\033[0;40m^" << " ";
			
		}
		output << endl;
	}
	
	return output;
}

int Forest::nextStatus(int i, int j)
{
	if(grid[i][j]->getStatus() == 3) 
		{
			return 3;
		}
	
	if(grid[i][j]->getStatus() == 0 || grid[i][j]->getStatus() == 2)
	{
		return 0;
	} 
	
	if(grid[i][j]->getStatus() == 1)
	{
		double xval;
		xval = static_cast<double>(rand()) / (RAND_MAX);
		
		if((grid[i + 1][j]->getStatus() == 2) || (grid[i - 1][j]->getStatus() == 2) || (grid[i][j + 1]->getStatus() == 2 )|| (grid[i][j - 1]->getStatus() == 2 ))
		{
			if (grid[i][j]->getProbCatch()/grid[i][j]->getWetness() > xval)
			{
				return 2;
			}
			else 
			return 1;
		}
		else
		return 1;
	}
	
	//return grid[i][j].getStatus();
}

void Forest::applyNextStatus()
{
	Tree newGrid[21][21];
	
	for(int i = 0 ; i < 21 ; i++)
	{
		for (int j = 0 ; j < 21 ; j++)
		{
			newGrid[i][j] = *grid[i][j];
		}
	}
	for(int i = 1; i < 20; i++)
	{
		for(int j = 1; j < 20; j++)
		{
			newGrid[i][j].setStatus(nextStatus(i , j));
			//grid[i][j] = newGrid[i][j];
		}
	}
	for(int i = 0 ; i < 21 ; i++)
	{
		for (int j = 0 ; j < 21 ; j++)
		{
			*grid[i][j] = newGrid[i][j];
		}
	}
}

bool Forest::isBurning()
	{
			for(int i = 1 ; i < 20 ; i++)
			{
				for(int j = 1; j < 20 ; j++)
				{
					if (grid[i][j]->getStatus() == 2)
					{
						return true;
					}
				}
			}
			
			return false;
	}
	
void Forest::setGrid(int i, int j, double prob, int stat, double wet, int burn)
{
	grid[i][j]->setProbCatch(prob);
	grid[i][j]->setStatus(stat);
	grid[i][j]->setWetness(wet);
	grid[i][j]->setBurnTime(burn);
	
}


void Forest::lightning(double a)
{
	for(int i = 1; i < 20; i++)
	{
		for(int j = 1; j< 20; j++)
		{
			if(grid[i][j]->getStatus() == 1)
			{	
				double pval;
				pval = static_cast<double>(rand()) / (RAND_MAX);
				if (pval < a)
				{
					grid[i][j]->setStatus(2);
					return;
				}
				else
				grid[i][j]->setStatus(1);
				
			}
			else
			grid[i][j]->setStatus(1);
		}
	}
}

double Forest::percentTrees()
{
	double x;
	for(int i = 0; i < 21; i++)
	{
		for(int j = 0; j < 21; j++)
		{
			if(grid[i][j]->getStatus() == 1)
			{
				x++;
			}
		}
	}
	
	return x / 441 * 100;
}

void Forest::regrowth(double growprob)
{
	for(int i = 1; i < 20; i++)
	{
		for(int j = 1; j< 20; j++)
		{
			if(grid[i][j]->getStatus() == 0)
			{	
				double pval;
				pval = static_cast<double>(rand()) / (RAND_MAX);
				if (pval < growprob)
				{
					grid[i][j]->setStatus(3);

				}
				else
				grid[i][j]->setStatus(0);
				
			}
		
			
		}
	}
	
}















































