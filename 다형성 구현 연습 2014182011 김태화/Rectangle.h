#include "Point.h"
#include "Shape.h"

class Rectangle : public Shape{
	int id;
	Point p1, p2;
public:
	Rectangle();
	Rectangle(const Point&, const Point&);
	Rectangle(const Rectangle&);
	~Rectangle();

	virtual void draw();
};