#ifndef _Shape
#define _Shape

class Shape{
public:
	int id;
	Shape(){};
	virtual ~Shape(){};
	virtual void draw() =0;	//pure virtual function
};
#endif