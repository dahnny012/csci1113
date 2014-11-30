//leixx080 Rong Lei
//nguy1952 Danh Nguyen
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;


class Quad
{public:
	double a;
	double b;
	double c;
	void readValue (Quad& function);
	void showValue (Quad& function);
	Quad add_Quad(Quad& f1, Quad& f2);

	
};

int main()
{
	
	Quad f1, f2, f3;
	
	f1.readValue(f1);
	f2.readValue(f2);
	
	f1.showValue(f1);
	cout << endl;
	f2.showValue(f2);
	cout << endl;
	f3.add_Quad(f1, f2);
	cout << endl;
	
	return 0;
}

	
	void Quad::readValue(Quad& function)
	{
		cout << "enter the values for a, b and c \n";
		cin >> function.a >> function.b >> function.c;
	}
	
	void Quad::showValue (Quad& function)
	{
		cout << function.a <<"x^2 + " << function.b << "x + " << function.c;
	}
	
	Quad Quad::add_Quad(Quad& f1, Quad& f2)
	{
		Quad f3;
		f3.a = f1.a + f2.a;
		f3.b = f1.b + f2.b;
		f3.c = f1.c + f2.c;
		
		cout << f3.a <<"x^2 + " << f3.b <<"x + " <<f3.c;
	}
