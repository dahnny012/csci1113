// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "tree.h"

using namespace std;

double Tree::getProbCatch()
{
	return probCatch;
}

void Tree::setProbCatch(double x)
{
	probCatch = x;
}

int Tree::getStatus()
{
	return status;
}

void Tree::setStatus(int x)
{
	status = x;
}
void showSymbol(ostream& output);
double Tree::getWetness()
{
	return wetness;
}

void Tree::setWetness(double x)
{
	wetness = x;
}

int Tree::getBurnTime()
{
	return burnTime;
}

void Tree::setBurnTime(int x)
{
	burnTime = x;
}

ostream& operator << (ostream& output, Tree& arg)
{
	output << arg.type << endl << arg.probCatch << endl << arg.status << endl << arg.wetness << endl << arg.burnTime << endl;
	return output;
}
void Tree::showSymbol(ostream& output)
{
	output << "\033[33;40m!" << " ";
}
