#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main ()
{
	double V, Ti, Tf;
	
	cout << "Enter the initial temperature.\n";
	cin >> Ti;
	cout << "Enter the finial temperature.\n";
	cin >> Tf;
	if (Ti < Tf)
	{
		while (Ti <= Tf) 
		{
			V = 331.3 + 0.61 * Ti;
	cout << "At " << Ti << " degrees Celsius the velocity of sound is " 
		<< V << " m/s.\n";
		Ti++;
	}
	}
	
	else 
	{
		while(Ti >= Tf)
		{
			V = 331.3 + 0.61 * Ti;
	cout << "At " << Ti << " degrees Celsius the velocity of sound is " 
		<< V << " m/s.\n";
		Ti--;
	}
	}
	
return 0;
}
