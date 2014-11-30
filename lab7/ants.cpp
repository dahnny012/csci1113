//Danh Nguyen
//Rong Lei
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;
void display(char arrary[][20]) ;

int main ()
{
	int direction, food, nest, ant , r = 16 , c = 9 , steps = 0;
	char garray[20][20];
	srand(time(0));

	
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			garray[i][j] = '.';
			//cout << garray[i][j] << " ";
		}
		//cout << endl;
	}
	
	food = garray[2][9];
	nest = garray[r][c];
	ant = garray[r][c];
	
	while( true)
	{
		direction = rand() % 4;
		//cout << direction;
		if (r > 19)
			r = 19;
		if(r < 0)
			r = 0;
		if (c > 19)
			c = 19;
		if (c < 0)
			c = 0;
			
		switch(direction)
		{
			case 0:
			garray[r][c] ='a';
			garray[r][c - 1];
			c = c - 1;

			break;
			case 1:
			garray[r][c] ='a';
			garray[r - 1][c];
			r = r - 1;
			break;
			case 2:
			garray[r][c] ='a';
			garray[r ][c + 1];
			c = c + 1;
			break;
			default:
			garray[r][c] ='a';
			garray[r + 1][c];
			r = r + 1;
			break;
		
		}
			
		steps++;
		if((r == 2) && (c == 9))
			{
				garray[r][c] = 'F';
				break;
			}
		
		}
	display(garray);
	cout << " Food found" << " after " << steps << " steps" << endl;


	
	return 0;
}

void display(char array[][20])
{
for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
		
}
