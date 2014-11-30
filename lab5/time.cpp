#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;
int makeint (double);
bool ftime (int& hr, int& min);

int main ()
{
int hr, min;

	bool clock;
	clock = ftime(hr , min);
		if (clock == true)
		{
			cout << hr << ":" << min << " PM\n";
		}
			if (hr > 12)
			{
			hr = hr - 12; 
			cout << hr << ":" << min << " AM\n";
			}
			
	
	return 0;
}

int makeint (double t)
		{
			return t;
		}

bool ftime (int& hr, int& min)
{
	double current_time, minutes;
	char day;
	
	cout.setf (ios::fixed);
	cout.setf (ios::showpoint);
	cout.precision(2);
	
	current_time= (((time(0) / 60.00 / 60.00 / 24.00) - (time(0) / 60 / 60 / 24)) * 24 + 6);
	minutes = 60 * (current_time - makeint(current_time));
	hr = current_time;
	min = minutes;
	
	if (hr < 12)
	{
	return true;
	}
	else
	return false;	
		
}
