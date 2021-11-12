#include <iostream>

using namespace std;


int main()
{
	const int a = 12;
	const int b = 13;

	const int* p1 = &a;
	p1 = &b;
	//*p1 = 3;

	const int* const p2 = &a;
	//*p2 = 3;
	//p2 = &b;

	int x, y;
	int* px, *py, normalNonPointerInt;
}
