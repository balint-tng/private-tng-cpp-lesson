#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <string>
#include <list>
#include <fstream>


using namespace std;

class SomeClass
{
public:
	vector<int> vec;
	string s;
};

void f(SomeClass byValue)
{}

void example(unique_ptr<int> someUniquePtr)
{
	// Do something
}

int main()
{
	vector<int> v = { 1, 3, 2 };
	v.push_back(2);
	v.push_back(3);

	list<char> c = { 'a', 'c', 'b' };
	//list deduced = { 'a', 'b' };

	int someElement = v[2];

	string someString = "Hello world!";
	someString += "append";

	SomeClass someClass;
	f(someClass);

	sort(v.begin(), v.end());
	sort(c.begin(), c.end());

	for (auto it = v.begin(); it != v.end(); ++it)
	{
		*it = 0;
	}

	for (int& x : v)
	{
		x = 0;
	}

	{
		unique_ptr<int> someIntOnHeap = make_unique<int>(5);
		example(move(someIntOnHeap));
	}

	{
		shared_ptr<int> someIntOnHeap = make_shared<int>(10);
		shared_ptr<int> other = someIntOnHeap;
		weak_ptr<int> weak = other;
		if (shared_ptr<int> shared = weak.lock())
		{
			// access shared!
		}
		*other = 15;
	}

	ofstream os("file.txt");
	os << "Some line in file\n";
	// Reasource allocation is initialization (RAII)
}
