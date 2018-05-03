#include "Point.h"		//point�� triangle���� ���
#include "Shape.h"	//shape�� ��� ����

class Triangle : public Shape{
	int id;
	Point p1, p2, p3;
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	~Triangle();

	virtual void draw();	//�����Լ� overriding
};