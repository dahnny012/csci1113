#include <iostream>
#include <cmath>

using namespace std;
int GCD(int, int);

int main ()
	{
	int a , b ;
	cout << "enter first number\n";
	cin >> a;
	cout << "enter second number\n";
	cin >> b;
			
	cout << GCD(a, b) << endl;
		
		
	}
	
	int GCD(int a, int b)
	{
		int q, r = a % b;
		while (r > 0)
		{
		q = a / b;
		r = a % b;
		a = b * q + r;
		a = b;
		b = r;
	}
		return a;
	}
	
