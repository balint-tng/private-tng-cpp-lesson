#include <iostream>


using namespace std;

class Class
{
public:
	int x;
	int y;
	int z;

	void method()
	{}

private:
	int privateVariable;
};

struct Struct
{
	int x;
};

/*struct Event
{
	int eventType;
	union
	{
		MouseEvent mouseEvent;
		WindowEvent windowEvent;
	};
};*/

int main()
{
	Class object1;
	object1.x;
	object1.method();

	Class* objectOnHeap = new Class();
	objectOnHeap->method();
	objectOnHeap->x;
	(*objectOnHeap).x;
	*objectOnHeap = object1;
	delete objectOnHeap;	// Maybe also set it to null after?

	*objectOnHeap = *(new Class());	// MEMORY LEAK!
	delete objectOnHeap;	// DOUBLE FREE!

	Struct object2;
}
