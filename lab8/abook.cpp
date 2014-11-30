//leixx080 Rong Lei
//nguy1952 Danh Nguyen
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

class address
{public:
	string lastname;
	string firstname;
	int telenumber;
};

int lookup (address addressbook[500], string lastname, string firstname);

int main()
{

	ifstream infile;
	ofstream outfile;
	string lastname, firstname;

	address addressbook[500];
	char adding;
	int ind , telnumber;

	infile.open("addressbook.txt");
	outfile.open("addressbook.txt", ios::app);

	if ((infile.fail())||(outfile.fail()))
	{
		cout << "gg";
		exit(0);
	}

	for(int i = 0; i < 500; i++)
	{
		infile >> addressbook[i].lastname >> addressbook[i].firstname >> addressbook[i].telenumber;
	}

	cout << "enter lastname first and firstname last\n";
	cin >> lastname >> firstname;

	do
	{
		
	ind = lookup(addressbook, lastname, firstname);
	if(ind >= 0)
	{
		cout << addressbook[lookup(addressbook, lastname, firstname)].telenumber / 10000
		<<"-"<< addressbook[lookup(addressbook, lastname, firstname)].telenumber % 10000<< endl;
	}
	
	else
	{
		cout << "Would you like to add this person into the address book? (y/n).\n";
		cin >> adding;
		if((adding == 'y')||(adding == 'Y'))
		{
		    cout<< "enter their telephone number ";
		    cin>> telnumber ;
			outfile << lastname <<"\t\t" ;
			outfile << firstname <<"\t\t";
			outfile << telnumber << endl ;
			
			for(int i = 0; i < 500; i++)
            {
				infile >> addressbook[i].lastname >> addressbook[i].firstname >> addressbook[i].telenumber;
            }
		}
	}

	cout << "If you want to end this process, enter '-', else enter a different name, lastname first, firstname last.\n";
	cin >> lastname >> firstname;
	}
	while((lastname != "-")||(firstname != "-"));

	outfile.close();
	infile.close();

	return 0;
}

int lookup (address addressbook[500], string lastname, string firstname)
{
	for(int i = 0 ; i < 500; i++)
	{
		if ((addressbook[i].lastname == lastname) && (addressbook[i].firstname == firstname))
		{
			return i;
		}
	}

		return -1;
}
