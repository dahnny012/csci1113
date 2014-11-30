#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double num (double numbers[], int size);

int main ()
{
	int size;
	double numbers[size], sd;
	cout << "enter how many numbers you need the standard deviation of\n";
	cin >> size;
	sd = num(numbers , size);
	cout << sd << endl;
}

double num (double numbers[], int size)
{
	double sd, sum = 0, sum2 = 0, avg;
	

	cout << "enter your values\n";
	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
	}
	
	avg = sum / size;
	
	for (int j = 0; j < size; j++)
	{
		sum2 += (numbers[j] - avg) * (numbers[j] - avg);
	}
	sd = sqrt( sum2 / size );
	
	return sd;
}
