#include <iostream>

using namespace std;


void functionWithOutParam(/*const*/int& reference)
{
	reference = 12;
}

void functionWithOptionalOutputParam(int* optional = nullptr)
{}

int main()
{
	int a = 12;
	int b = 3;

	int* p = &a;
	int& r = a;

	int* np = nullptr;
	//int& nr = 10;

	int*& referenceToPointer = p;

	const int& cr = 10;

	r = b;
	cout << a << r << '\n';
	a = 100;
	cout << a << r << '\n';
	functionWithOutParam(a);
	cout << a << r << '\n';
}
