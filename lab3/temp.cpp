#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
	double rate, Ts, T, step, length, newstep = 0;
	
	cout << "Enter the initial temperature.\n";
	cin >> T;
	cout << "Enter then surrounding temperature.\n";
	cin >> Ts;
	cout << "Enter the rate of growth/decay.\n";
	cin >> rate;
	cout << "Enter the length of the time step.\n";
	cin >> step;
	cout << "Enter the simulation length.\n";
	cin >> length;
	
	while (newstep < length)
	{
		newstep = newstep + step;
		T = T + rate * (Ts - T) * step;
		
		cout << "At time = " << newstep << "hours, the temperature is " << T << "degree Celcius.\n";
	}
	
	return 0;
}
