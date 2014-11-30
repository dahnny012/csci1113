// nguy1952 Danh Nguyen
// leixx080 Rong Lei


#include <iostream>
#include <cmath>
#include <cstdlib>
#include "rational.h"

using namespace std;


int main()
{
	char sym, cond;
	/*rational r1(0), r2(17, 51), r3(-102);
	cout << "value of r1: " << r1 << endl;
	cout << "value of r2: " << r2 << endl;
	cout << "value of r3: " << r3 << endl;
	rational r4, r5;
	cout << "Enter values for r4 and r5: ";
	cin >> r4 >> r5;
	cout << "value of r4: " << r4 << endl;
	cout << "value of r5: " << r5 << endl;*/
	
	rational frac1(2, 8), frac2(1, 8), prod, frac3, frac4;
	
	
	/*prod = frac1 + frac2;
	cout << prod << endl;
	prod = frac1 - frac2;
	cout << prod << endl;
	prod = frac1 * frac2;
	cout << prod << endl;
	prod = frac1 / frac2;
	cout << prod << endl;*/
	
	/*do
	{
	cout << "enter a fraction expression: ";
	cin >> frac3 >> sym >> frac4;
	
	if(sym == '*')
	{
		prod = frac3 * frac4;
	}
	else if (sym == '/')
	{
		prod = frac3 / frac4;
	}
	else if(sym == '+')
	{
		prod = frac3 + frac4;
	}
	else 
	{
		prod = frac3 - frac4;
	}
	cout << prod << endl;
	cout << "continue? (y/n)\n";
	cin >> cond;
	}
	while( cond == 'y');*/
	
	cout << frac1.fpoint() << endl;
	
	
	return 0;
}


