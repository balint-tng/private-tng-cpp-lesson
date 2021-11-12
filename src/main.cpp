#include <iostream>
#include <stdexcept>
using namespace std;
class Array
{
private:
	unsigned mySize;
	int* array;
public:
	/* Array()
	{
		mySize = 0;
		array = nullptr;
	} */
	Array(unsigned size) : mySize(size)
	{
		if (size == 0)
			throw runtime_error("Size may not be zero!");
		array = new int[mySize]();
	}

	Array(const Array& otherArray)
	{
		mySize = otherArray.mySize;
		array = new int[mySize];
		for (int i = 0; i < mySize; ++i)
		{
			array[i] = otherArray.array[i];
		}
	}
	Array(Array&& otherArray)
	{
		mySize = otherArray.mySize;
		array = otherArray.array;
		otherArray.array = nullptr;
	}
	Array& operator=(Array&& otherArray)
	{
		mySize = otherArray.mySize;
		array = otherArray.array;
		otherArray.array = nullptr;
		return *this;
	}
	Array& operator=(const Array& otherArray)
	{
		mySize = otherArray.mySize;
		delete[] array;
		array = new int[mySize];
		for (int i = 0; i < mySize; ++i)
		{
			array[i] = otherArray.array[i];
		}
		return *this;
	}
	~Array()
	{
		cout << "delete", delete[] array, cout << "dont do this";
	}
	int getArrayElement(unsigned position) const
	{
		if (position < mySize)
			return array[position];
		throw runtime_error("out of bounds");
	}
	void setArrayElementAtPosition(int value, int position)
	{
		if (position >= mySize)
			throw runtime_error("out of bounds");
		array[position] = value;
	}

};

void f(Array array)
{
	cout << array.getArrayElement(2) << '\n';
}

int main()
{
	try
	{
		Array array(3);
		array.setArrayElementAtPosition(10, 1);
		array.getArrayElement(1);
		//cout << array.getArrayElement(0) << " " << array.getArrayElement(1) << " " << array.getArrayElement(2) << endl;
		f(array);
		cout << "hello";
		//cin.get();
		Array array2(4);
		array = array2;
	}
	catch (const exception& e)
	{
		cerr << e.what();
	}
}