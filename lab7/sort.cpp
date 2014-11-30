// leixx080 Rong Lei
// nguy1952 Danh Nguyen
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;
void swap (double& a, double& b);
void bsort (double list[50], int num);

int main ()
{
	double list[50];
	
	double size = 100;
	for(int i = 0; i < 50; i++)
	{
		list[i] = size;
		size--;
	}
	bsort(list, 50);
	
	int i = 0;
	for(int k = 0; k < 10; k++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<<list[i] << " " ;
			i++;
		}
		cout << endl;
	}
	
}

void swap (double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}

void bsort (double list[50], int num)
{
	for(num; num > 1; num--)
	{
		for(int i = 0; i < (num - 1); i++)
		{
			if (list[i] > list[i + 1])
			{
				swap(list[i], list[i + 1]);
			}
		}
	}
}

