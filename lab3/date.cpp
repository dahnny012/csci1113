#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
	int month , day , year;
	
	cout<<"please enter the month in a integer format.\n";
	cin >>month;
	cout<<"please enter the day in a integer format.\n";
	cin>>day;
	cout<<"please enter the year in a integer format.\n";
	cin>>year;
	
	if ((month > 12) || (day > 31) || (month <= 0) || (day <= 0) || (year <= 0))
	{
		cout<<"invalid date.\n";
		cout<<"terminating program.\n";
		exit(1);
		
	}
	
	if ((month == 2) && (day == 29) && ((year % 4 != 0) || (year % 4 != 0)))
	{
		cout<<"invalid date.\n";
		cout<<"terminating program.\n";
		exit(1);
		
	}
	

	switch (month)
	{
		case 2:
		if ((day == 29) && ((0 == year % 4) || (0 == year % 400)))
		{
			++month;
			day = 1;
		}
		if ((day == 28) && ((year % 4 != 0) && (year % 400 != 0)))
		{
			++month;
			day = 1;
		}
		else day++;
		cout << month << '/' << day << '/' << year;
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		if (day == 30) 
		{
		++month;
		day = 1;
		} 
		if (day == 31)
		{
		cout<<"invalid date.\n";
		cout<<"terminating program.\n";
		exit(1);
		
	}
		else ++day;
		cout << month << '/' << day << '/' << year;
		break;
		
		case 12:
		if (day == 31)
		{
			month = 1;
			day = 1;
			++ year;
		}
		else day++;
		
		cout << month << '/' << day << '/' << year;
		break;
		
		default:
		if (day == 31) 
		{
			++month;
			day = 1;
		}
		else ++day;
		cout << month << '/' << day << '/' << year;
		
	}
	return 0;
}
