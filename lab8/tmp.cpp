#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;
const int NROWS = 20, NCOLS = 20;
void display ( double temp[][NCOLS] );


int main()
{
	double temp[NROWS][NCOLS], old[NROWS][NCOLS];
	double ttop, tbot, tright, tleft, conv, inttemp;
	cout << "enter the temperature the of top, bottom, left and right\n";
	cin >> ttop >> tbot >> tleft >> tright;
	cout << "enter the temperature of the interior cells\n";
	cin >> inttemp;
	cout << "enter a convergence critera\n";
	cin >> conv;


		for (int i = 0; i < NROWS; i++)
	{
		for(int j = 0; j < NCOLS ; j++)
			{
				old[i][j] = inttemp;
			}
	}
	
	
	
	for (int i = 0; i < NROWS; i++)
	{
		for(int j = 0; j < NCOLS ; j++)
			{
				old[0][j] = ttop;
				old[19][j] = tbot;
				
			}
	}
	
	
		for (int i = 1; i < NROWS - 1; i++)
	{
		for(int j = 0; j < NCOLS ; j++)
			{
				old[i][0] = tleft;
				old[i][19] = tright;
				
			}
	}
	
	for (int i = 0; i < NROWS; i++)
	{
		for(int j = 0; j < NCOLS ; j++)
			{
				
				temp[i][j] = old[i][j];
				cout<< temp[i][j] << "\t";
			}
			cout << endl;
	}
	
	bool steady;
	
	while(steady == false)
	{
		steady = true;
		for (int i = 0; i < NROWS; i++)
		{
			for(int j = 0; j < NCOLS ; j++)
				{
				
					old[i][j] = temp[i][j];
				}
		}
		for(int n = 1; n < NROWS - 1; n++)
		{
			for(int m = 1; m < NCOLS - 1; m++)
			{
				temp[n][m] = .25 * (old[n - 1][m] + old[n + 1][m] + old[n][m - 1] + old[n][m +1]);
				if(abs(temp[n][m] - old[n][m]) > conv)
				{
					steady = false;
				}
			}
		}
			
	}
	cout<< endl;
	

	
	display(temp);
	
return 0;	
}

void display ( double temp[][NCOLS] )
{	
	ofstream outfile;
	outfile.open("temp.dat");
	if(outfile.fail())
	{
		cout << "failed to open file";
		exit(0);
	}
	for (int i = 0; i < NCOLS; i++)
	{
		for(int j = 0; j < NCOLS ; j++)
			{
				cout << temp[i][j] << "\t";
				outfile << temp[i][j]<< " ";
			}
			cout << endl ;
			outfile << "\n"; 
	}
	outfile.close();
}







