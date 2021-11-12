#include <iostream>

using namespace std;

void f1(int i)
{
	cout << "f1: " << i << '\n';
}

void f2(int i)
{
	cout << "f2: " << i * i << '\n';
}

void sort(int* array, unsigned long sizeOfArray, bool (*comperator)(int, int))
{}

int main()
{
	void (*nameOfPointerToFunction)(int) = f1;
	nameOfPointerToFunction(3);
	nameOfPointerToFunction = f2;
	nameOfPointerToFunction(3);
}
