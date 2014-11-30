// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#ifndef rational_h
#define rational_h

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


class rational
{
	public:
		rational(){}
		rational(long int n):num(n), denom(1) {}
		rational(long int n, long int d): num(n), denom(d){}
		friend rational operator+ (rational arg1, rational arg2);
		friend rational operator- (rational arg1, rational arg2);
		friend rational operator* (rational arg1, rational arg2);
		friend rational operator / (rational arg1, rational arg2);
		friend istream& operator>>(istream& input, rational& arg1);
		friend ostream& operator<<(ostream& output, rational& arg1);
		double fpoint();
	
	private:
		long int num;
		long int denom;
		void reduced();
};

#endif
