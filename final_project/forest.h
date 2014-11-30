// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#ifndef forest_h
#define forest_h

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "tree.h"

using namespace std;

class Forest
{
	public:
		Forest();
//		~Forest();
		int nextStatus(int i, int j);
		void applyNextStatus();
		friend ostream& operator << (ostream& output, Forest& arg);
		bool isBurning();
		void setGrid(int i, int j, double prob, int stat, double wet, int burn);
		void lightning(double a);
		double percentTrees();
		void regrowth(double growprob);
	private:
		Tree* grid[21][21];
	
};



#endif
