#include <iostream>

using namespace std;

int f(char a, int b)
{
	return a + b;
}

int main()
{
	int a = 3;
	int* p = &a;

	int array[3] = { 1, 2, 3 };
	int* pointerToArray = array;

	cout << *p << '\n';
	cout << *pointerToArray << '\n';
	cout << *(pointerToArray + 1) << '\n';
	cout << *(pointerToArray + 2) << '\n';

	cout << pointerToArray[0] << '\n';
	cout << pointerToArray[1] << '\n';
	cout << pointerToArray[2] << '\n';
}
