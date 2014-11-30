//Danh Nguyen
//Rong Lei
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
double theory (double n);
double simulate (double n);
const int day = 365;
bool same_birthday (double bday[] , int n);


int main ()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	
	cout << 'n' << "\t" << "theorectical" << "\t" << "simulation" << endl;
for(int n = 5; n <= 55; n+=5)
{
	cout << n << "\t" << theory(n) << "\t \t" << simulate(n) << endl;
}
	
	return 0;
}
 
double theory (double n)
{
	double notmatch = 1.0, prob;
	
	for(int i = 1; i <= n; i++)
		{
			notmatch *= ((365.0 - (i - 1)) / 365.0);
		}
	prob = 1.0 - notmatch;
	
	return prob;
}

double simulate (double n)
{
	srand(time(0));
	double day[365], counter, prob;
	for(int j = 0; j < 10000; j++)
	{
		for (int i = 0; i < n; i++)
		{
			day[i] = rand() % 364 + 1;
		}
		if (same_birthday(day, n) == true)
		{
			counter++;
		}
	}
	prob = counter / 10000;
	return prob;
}

bool same_birthday (double bday[] , int n)
{
for (int j = 0 ; j < n ; j++)
{
	for(int i = (j + 1); i < n; i++)
	  {
		  if(bday[j] == bday[i])
		  {
		  return true;
		  
		}
	  }
}

}
