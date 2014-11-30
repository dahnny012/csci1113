// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#ifndef oak_h
#define oak_h

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "tree.h"

using namespace std;

class Oak: public Tree
{
	public:
		Oak(){}
		Oak(string a, double b, int c, double d, int e): Tree(a, b, c, d, e){}
		void showSymbol(ostream& output){ output << "\033[34;40m@" << " ";}
};

#endif
