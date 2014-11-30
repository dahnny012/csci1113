// leixx080 Rong Lei
// nguy1952 Danh Nguyen
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;
double min2(double data[][7], int nrows1, int ncols1);
const int NROWS = 10;
const int NCOLS = 7;
string Daay (int day);



int main ()
{
	ifstream input;
	
	double data[NROWS][NCOLS];
	double min;
	
	
	input.open("power1.dat");
		if (input.fail())
		{
			cout<< " ggggggg";
		}
	for(int i = 0; i < NROWS; i++ )
	{
		for(int j = 0; j < NCOLS; j++)
		{
			input >> data[i][j];
		}
	 }
	 min2(data, NROWS, NCOLS);
	
}


double min2(double data[NROWS][NCOLS], int nrows1, int ncols1)
{
	int day , week;
	double min = data[0][0];
	for(int i = 0; i < nrows1; i++)
	{
		for(int j = 0; j < ncols1; j++)
		if (data[i][j] <= min)
		{
			min = data[i][j];
			}
		}
	for(int i = 0; i < nrows1; i++)
	{
		for(int j = 0; j < ncols1; j++)
		if (data[i][j] == min)
		{
			{
				week = i;
				day = j;
				cout << min <<" "<< Daay(day) <<" " << "during week " << week + 1 << endl;
			}
		}
	}
}

string Daay (int day)
{
	if (day == 0)
	return "sunday";
	if (day == 1)
	return "monday";
	if (day == 2)
	return "tuesday";
	if (day == 3)
	return "wednesday";
	if (day == 4)
	return "thursday";
	if (day == 5)
	return "friday";
	if (day == 6)
	return "saturday";
	}
