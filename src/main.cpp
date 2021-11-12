#include <iostream>
#include <string>
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

void dataTypes()
{
	// uint32_t;

	char a = 'q';	// 1 byte
	char a2 = 1;
	short b = 12;	// 2 bytes (here)
	int c;			// 4 bytes (here)
	long d;			// 4 bytes (here)
	long long e;	// 8 bytes
	signed char f;
	unsigned char g;
	unsigned int h;

	float i = 3.14f;
	double k = 3.14;
	long double l;

	const char string1[] = "string";
	const char* string2 = "string";

	string stdstring = "some string";

	int array[3];
	int initializedArray[/*3*/] = {1, 2, 3};
}
