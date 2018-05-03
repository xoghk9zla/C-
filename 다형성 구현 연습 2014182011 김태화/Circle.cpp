#include <iostream>
#include "Circle.h"

Circle::Circle() : id(3), center(), rad(0) {}

Circle::Circle(const Point& c, int r) : id(3), center(c), rad(r){}

Circle::Circle(const Circle& other) : id(other.id), center(other.center), rad(other.rad){}

Circle::~Circle(){}

void Circle::draw(){
	std::cout << "�� - �߽���(" << center.x << "," << center.y << ") ������ " << rad << std::endl;
};