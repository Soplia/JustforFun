#include <iostream>
using namespace std;

double div1(double a, int b)
{
	if (b == 0)
		throw "��������Ϊ0";
	return a / b;
}

