#include <iostream>


using namespace std;

struct Position
{
	int x;
	int y;
};

class BigAssObject
{
public:
	int someConstFunction() const { return 0; }
	int someNonConstFunction() { return 0; }
};

class GameObject
{
public:
	void setPosition(Position position) /*const*/ { myPosition = position; }
	Position getPosition() const { return myPosition; }

	void setBAO(BigAssObject bao) { myBAO = bao; /*Should use move!*/ }
	const BigAssObject& getBAO() const { return myBAO; }
	BigAssObject& getBAO() { return myBAO; }

private:
	Position myPosition;
	BigAssObject myBAO;
};

void certainPartOfTheCode(const GameObject& object)
{
	object.getBAO().someConstFunction();
}

void otherPlace(GameObject& object)
{
	object.getBAO().someNonConstFunction();
}

int main()
{
	Position p;
	p.x = 1;
	p.y = 2;

	const GameObject object;
	//object.setPosition(p);
	//object.setPosition({ 1, 2 });
	Position p2 = object.getPosition();

	const GameObject& refToObject = object;
	//refToObject.setPosition({ 1, 2 });
}
