// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "tree.h"
#include "forest.h"
#include "oak.h"
#include "pine.h"

using namespace std;

int main()
{
	double pc, wetness, percent = 0, avg;
	int y;

	Tree normaltree;
	Oak oaktree;
	Pine pinetree;
	Tree* treePtr;
	//Part A
	//Tree oak1 , oak2("oak", 0.0, 1, 1.0, 1), oak3("tree", 1.0, 1, 30.0, 1);
	//cout << "oak1: " << oak1 << "oak2: " << oak2 << "oak3: " << oak3;
	
	//Part B

	/*for(int i = 1; i < 11; i++)
	{
		for(int j = 1; j< 20; j++)
		{
			green.setGrid(i, j, 0.8, 1, 2.0, 1);
		}
	}*/
	
	cout << "What is the probability catch?: ";
	cin >> pc;
	cout << "What is the wetness factor?: ";
	cin >> wetness;
	cout << "How many simulations you want?: ";
	cin >> y;
	for(int n = 0; n < y; n++)
	{
		Forest green;
		for(int i = 1; i < 20; i++)
		{
			for(int j = 1; j< 20; j++)
			{
				green.setGrid(i, j, pc, 1, wetness, 1);
			}
		}
		//Part C
		//green.applyNextStatus();
		//cout << green << endl;
		
		//Part D & E
		//green.lightning(.001);
		green.setGrid(10, 10, 1.0, 2, 1.0, 1);
		
		
		while(green.isBurning() == true)
		{
			usleep(500000);
			green.regrowth(0.3);
			green.applyNextStatus();
			
			cout<< green << endl;
		}
		
		percent += green.percentTrees();

	}
	
	avg = percent / y;
	cout << "Average percentage of unburning tree: " << avg << endl;

	

	
	return 0;
}

