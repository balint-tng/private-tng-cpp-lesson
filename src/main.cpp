#include <iostream>

using namespace std;

void f1(int i)
{
	i = 3;
}

void f2(int* ptr)
{
	*ptr = 3;
}

void f(int* array, int sizeOfIt) {}

// lesson.exe someinput1 someinput2
int main(int argc, char** argv)
{
	int a = 3;
	int* p = &a;
	int** pointerToPointer = &p;
	int b = **pointerToPointer;

	int array[3] = { 1, 2, 3 };
	int* pointerToArray = array;

	cout << *p << '\n';
	cout << *pointerToArray << '\n';
	cout << *(pointerToArray + 1) << '\n';
	cout << *(pointerToArray + 2) << '\n';

	cout << pointerToArray[0] << '\n';
	cout << pointerToArray[1] << '\n';
	cout << pointerToArray[2] << '\n';

	//argv[0][0]
	//**argv;

	int someInt = 2;
	f1(someInt);
	f2(&someInt);
}
