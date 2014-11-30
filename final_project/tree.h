// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#ifndef tree_h
#define tree_h

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

class Tree
{
	public:
		Tree():type("not a tree"), probCatch(1.0), status(0), wetness(1.0), burnTime(1){}
		Tree(string a, double b, int c, double d, int e): type(a), probCatch(b), status(c), wetness(d), burnTime(e){}
		double getProbCatch();
		void setProbCatch(double x);
		int getStatus();
		void setStatus(int x);
		double getWetness();
		void setWetness(double x);
		int getBurnTime();
		void setBurnTime(int x);
		friend ostream& operator << (ostream& output, Tree& arg);
		virtual void showSymbol(ostream& output);
	private:
		string type;
		double probCatch;
		int status;
		double wetness;
		int burnTime;
		
};

#endif
