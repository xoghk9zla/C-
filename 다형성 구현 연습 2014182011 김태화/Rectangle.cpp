#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() : id(2), p1(), p2() {};

Rectangle::Rectangle(const Point& a, const Point& b) :id(2), p1(a), p2(b) {};

Rectangle::Rectangle(const Rectangle& other) : id(other.id), p1(other.p1), p2(other.p2){}

Rectangle::~Rectangle(){}

void Rectangle:: draw(){
	std::cout << "»ç°¢Çü - (" << p1.x << "," << p1.y << "), (" << p2.x << "," << p2.y << ")" << std::endl;
};