#include "Point.h"
#include "Shape.h"

class Circle : public Shape{
	int id;
	Point center;
	int rad;
public:
	
	Circle();
	Circle(const Point&, int);
	Circle(const Circle&);
	~Circle();

	virtual void draw();
};