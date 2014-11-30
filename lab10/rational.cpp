// nguy1952 Danh Nguyen
// leixx080 Rong Lei
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "rational.h"

using namespace std;
long int GCD(long int a, long int b);

long int GCD(long int a, long int b)
{
	 long int r;
	 if(a < b)
	 {
		r = a % b;
	}
	else
		r = b % a;
		
	
	while (r > 0)
	{
		
		r = a % b;
		
		a = b;
		b = r;
	}
	
	return a;
}

void rational::reduced()
{
	long int gcd;
	gcd = GCD(num, denom);
	 num = num / gcd;
	 denom = denom / gcd;
	
}

istream& operator >>(istream& input, rational& arg1)
{
	char symbol;
	
	input >> arg1.num >> symbol >> arg1.denom;
	arg1.reduced();
	return input;
}

ostream& operator <<(ostream& output, rational& arg1)
{
	output << arg1.num << '/' << arg1.denom;
	return output;
}

rational operator + (rational arg1, rational arg2)
{
	arg1.num *= arg2.denom;
	arg2.num *= arg1.denom;
	rational frac(arg1.num + arg2.num, arg2.denom * arg1.denom);
	frac.reduced();
	return frac;
	
}

rational operator - (rational arg1, rational arg2)
{
	arg1.num *= arg2.denom;
	arg2.num *= arg1.denom;
	rational frac(arg1.num - arg2.num, arg1.denom * arg2.denom);
	frac.reduced();
	return frac;
}

rational operator * (rational arg1, rational arg2)
{
	rational frac(arg1.num * arg2.num, arg1.denom * arg2.denom);
	frac.reduced();
	return frac;
}

rational operator / (rational arg1, rational arg2)
{
	rational frac(arg1.num * arg2.denom, arg1.denom * arg2.num);
	frac.reduced();
	return frac;
}

double rational::fpoint()
{
	return static_cast<double>(num / denom);
}
