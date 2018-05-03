#include <iostream>
#include "Triangle.h"

Triangle::Triangle() : id(1), p1(), p2(), p3() {};

Triangle::Triangle(const Point& a, const Point& b, const Point& c) : id(1), p1(a), p2(b), p3(c){};

Triangle::Triangle(const Triangle& other) : id(other.id), p1(other.p1), p2(other.p2), p3(other.p3){}

Triangle::~Triangle(){}

void Triangle::draw(){
		std::cout << "»ï°¢Çü - (" << p1.x << "," << p1.y << "), (" << p2.x << "," << p2.y << "), (" << p3.x << "," << p3.y << ")" << std::endl;
};