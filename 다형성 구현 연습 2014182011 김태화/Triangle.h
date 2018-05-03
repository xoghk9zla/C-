#include "Point.h"		//point를 triangle에서 사용
#include "Shape.h"	//shape을 상속 받음

class Triangle : public Shape{
	int id;
	Point p1, p2, p3;
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	~Triangle();

	virtual void draw();	//가상함수 overriding
};