#include <iostream>


using namespace std;

int main()
{
	int* pointerToHeap = new int(5);
	cout << *pointerToHeap << '\n';
	delete pointerToHeap;

	int* pointerToArray = new int[10]{ 2, 3, 4 };
	cout << pointerToArray[0] << pointerToArray[1] << pointerToArray[8] << '\n';
	delete[] pointerToArray;

	/*int** pointerToArrayOfArray = new int* [5];
	for (int i = 0; i < 5; ++i)
		pointerToArrayOfArray[i] = new int[10];*/
}
