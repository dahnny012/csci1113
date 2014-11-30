// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#ifndef pine_h
#define pine_h

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "tree.h"

using namespace std;

class Pine: public Tree
{
	public:
		Pine(){}
		Pine(string a, double b, int c, double d, int e): Tree(a, b, c, d, e){}
		void showSymbol(ostream& output){ output << "\033[35;40m^" << " ";}
};

#endif
