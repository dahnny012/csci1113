#include <iostream>
#include <cmath>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
void file_merge (ifstream &input , ifstream &input1 , ofstream &output);

int main()
{
    ifstream input , input1;
	input.open("data1.dat");
    input1.open("data2.dat");
	ofstream output;
    output.open("merge.dat");
    
    if (( output.fail())||( input.fail())||( input1.fail()))
 	{
	    cout << " file open failure \n" ;
		return 1;
	}

	file_merge(input, input1, output);

	return 0;


}

void file_merge (ifstream& input , ifstream& input1 , ofstream& output)
{
 	int data1 , data2;

	input >> data1;
	input1 >> data2;
	
	while ((!input.eof()) && (!input1.eof()))
	{
		if ( data1 < data2)
		{
			output << data1 <<" ";
			input >> data1;
		}
		else
		{
			output << data2 << " ";
			input1 >> data2;
		}
	}
	while( !input.eof() )
	{
		output << data1 << " ";
		input >> data1;
		if (input.eof())
		{
			break;
		}
	}
	while( !input1.eof() )
	{
		output << data2 << " ";
		input1 >> data2;
		if (input1.eof())
		{
			break;
		}
	}
		
}
