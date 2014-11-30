#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;
void diceRoll (int& x, int& y);
void displayRoll (int& x, int& y);


int main ()
{
	srand(time(0));
	int x, y, sum1;
	displayRoll(x, y);
	
	return 0;
}

void diceRoll (int& x, int& y)
{
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
}
void displayRoll (int& x, int& y)
{
	int sum, sum1;
	
	diceRoll(x, y);
	
	sum = x + y;
	cout << "[" << x << "," << y << "]" << "= " << sum << endl;
	
	if ((sum == 7) || (sum == 11))
	{
		cout << "You Win!\n";
		
	}
	
	else if ((sum == 2) || (sum == 3) || (sum == 12))
	{
		cout << "You Lose!\n";
	
	}
	else 
		do
		{
			diceRoll(x, y);
			sum1 = x + y;
			cout << "[" << x << "," << y << "]" << "= " << sum1 << endl;
			if(sum1 == sum)
			{
				cout << "You Win!\n";
				break;
			}
			if( sum1 == 7)
			{
				cout << "You Lose!\n";
				break;
			}

			
				
		} while(sum1 != sum);
		
}
