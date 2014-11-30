#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	int group , groupee, sum = 0;
	ifstream input;
	input.open("group.dat");
	if ( input.fail())
	{
		cout << " file open failure \n" ; 
		return 1;
	}
	
	while(!input.eof())
	{
		sum = 0;
		if (!input.eof())
		{
			input >> group;
			if (input.eof())
					{
						break;
					}
			
			for (int i = 0; i < group; i++)
				{
					input >> groupee;
					sum += groupee;
					
					
					
				}
			cout << (sum / group) << endl;
		}
	}
	
	input.close ();
	
	return 0;
	
}
