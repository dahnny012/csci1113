#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;
double counter(double& counter1, double& counter2);



int main ()
{
	srand(time(0));
	double counter1, counter2;
	double x , y, prob, pi;
	
	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision(10);
	
	for (int i = 0; i < 1000000; i++)
{
	counter(counter1, counter2);
}
	
	prob = (counter1/(counter1 + counter2));
	pi = prob * 4.0;
	
	cout << pi << endl;
	
return 0;
	
}

double counter(double& counter1, double& counter2)
{
	double x, y;
	x = rand() / static_cast <double> (RAND_MAX) * 2.0 - 1.0 ;
	y = rand() / static_cast <double> (RAND_MAX) * 2.0 - 1.0 ;
	
	if ((x * x) + ( y * y) <= 1)
	{
	counter1++;
	}
	else
	counter2++;
}

