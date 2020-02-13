#include <iostream>
#include <exception>
using namespace std;

class Exc : public exception
{
public:
	const char* what()
	{
		return "JrX's exception";
	}
};

int d1(int a, int b)
{
	if (b == 0)
		throw Exc();
	return a / b;
}

int main()
{
	try
	{
		cout << d1(2, 1) << endl;
		cout << d1(2, 0);
	}
	catch (Exc & e)
	{
		cout << e.what() << endl;
	}
	system("pause");
	return 0;
}