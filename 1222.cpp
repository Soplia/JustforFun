#include <iostream>
using namespace std;

void f3()
{
	cout << "In F3" << endl;
	throw "exceptioni in F3";
}

void f2()
{
	cout << "In F2" << endl;
	f3();
}

void f1()
{
	cout << "In F1" << endl;
	f2();
}

