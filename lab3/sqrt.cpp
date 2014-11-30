#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
	int n;
	double guess, r, R=0.01, newguess;
	
	cout << "Enter a positive integer value.\n";
	cin >> n;
	
	if (n < 0)
	{
	cout << "Invalid input." << endl << "The program will terminate now.\n";
	exit(0);
}
guess=n;
newguess = n / 2;

	while ((guess - newguess) / guess > .01) 
	{
		guess = newguess;
		r = n / newguess;
		newguess = (newguess + r) / 2;
		cout<<newguess<<endl;
		
			
}		
        cout << "Babylonian square root of n " << newguess;
		cout << endl << sqrt (n);
		cout << endl << R;
	
		return 0;
	}
	
	
