#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
char fname (char name);

int main()
{
	string first, last, lowerfirst, lowerlast, pigfirst, piglast;
	cout << "Enter your first name and last name\n";
	cin >> first >> last;
	
	for(int i = 0; i < first.length(); i++)
	{
		lowerfirst += tolower(first[i]);
	}
	for(int j = 0; j < last.length(); j++)
	{
		lowerlast += tolower(last[j]);
	}
	

	if((lowerfirst[0] == 'a')||(lowerfirst[0] == 'e')||(lowerfirst[0] == 'i')||(lowerfirst[0] == 'o')||(lowerfirst[0] == 'u'))
	{
		lowerfirst[0] = toupper(lowerfirst[0]);
		lowerfirst+="way";
		
	}
	else 
	{
		lowerfirst = lowerfirst.substr(1) + lowerfirst[0];
		lowerfirst += "ay";
		lowerfirst[0] = toupper(lowerfirst[0]);
	}
	
	if((lowerlast[0] == 'a')||(lowerlast[0] == 'e')||(lowerlast[0] == 'i')||(lowerlast[0] == 'o')||(lowerlast[0] == 'u'))
	{
		lowerlast[0] = toupper(lowerlast[0]);
		lowerlast+="way";
		
	}
	else 
	{
		lowerlast = lowerlast.substr(1) + lowerlast[0];
		lowerlast += "ay";
		lowerlast[0] = toupper(lowerlast[0]);
	}
	
	
	cout << lowerfirst << " " << lowerlast << endl;
	
	
	return 0;
}

