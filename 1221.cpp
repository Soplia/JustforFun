#include <iostream>
using namespace std;

double div1(double a, int b)
{
	if (b == 0)
		throw "除数不能为0";
	return a / b;
}

