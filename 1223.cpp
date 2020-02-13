#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void ff1()
{
	throw logic_error("I am a logic_error");
}

void ff2()
{
	throw runtime_error("I am a runtime_error");
}

//int main()
//{
//	try
//	{
//		//ff1();
//		ff2();
//	}
//	catch (logic_error & e)
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "runtime error" << endl;
//	}
//
//	system("pause");
//	return 0;
//}