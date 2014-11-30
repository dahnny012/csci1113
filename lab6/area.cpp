#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
double count (double& count1, double& count2);

double a, b, m;

int main ()
{
	srand(time(0));
	double x, y , n, i = 0, area;
	
	cout << "Enter the values of a and b, where a is the minimum and b is the max.\n";
	cin >> a >> b;
	cout << "Enter the values of m, the maximum height.\n";
	cin >> m;
	cout << "How many darts do you want to throw?\n";
	cin >> n;
	
	while (i < n)
	{
		count(x , y);
		i++;
	}
	 
	 area = x / (x + y) * (150 * 6);
	 cout << "The area under the curve = " << area << endl;
	 
	 return 0;
	 
}

double count (double& count1, double& count2)
{
	double i, x, y, j;
	
	
	i = static_cast<double>(rand()) / (RAND_MAX);
	x = i * (b - a) + a;
	j = static_cast<double>(rand()) / (RAND_MAX);
	y = j * m;
	
	if ((2 * x * x + 3 * x - 2) > y)
	{
		count1++;
	}
	else
	{
		count2++;
	}
}
