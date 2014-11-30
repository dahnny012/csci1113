#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int day, type, mini, max, count3; 
	double maxt = 0, avg;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	
	ofstream output;
	ifstream input;
	input.open("WEATHER.DAT");
	
	if(input.fail())
	{
		cout << "Open fail failed.\n";
		return 1;
	}
	
	while(!input.eof())
	{
		if (input.eof())
		{
			break;
		}
		if (!input.eof())
		{
			input >> day >> max >> mini >> type;
		}
		
		if ((type == 1) || (type == 2))
		{
			count3++;
			maxt += max;
		}
	}
	
	cout << (maxt / count3) << endl;
	input.close();
	
	return 0;
}
