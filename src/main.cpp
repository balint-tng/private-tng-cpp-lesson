#include <iostream>
//#define min(a, b) ((a) < (b))

using namespace std;

void function(int a, int b = 0, int c = 0)
{
	cout << a << '\n';
}

void overload(int) {}
void overload(char) {}

/*int min(int a, int b)
{}*/

int main()
{
	function(12, 3);
	function(1, 2, 3);
	overload(21);
	overload('a');
	//std::min()
}

/*
	1. Preprocessor
	2. Compilation
	3. Linker
*/
