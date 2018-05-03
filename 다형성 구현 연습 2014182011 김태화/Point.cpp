#include "Point.h"

//디폴트 생성자
Point::Point() : x(0.0), y(0.0) {};

//인자 두 개를 받는 생성자
Point::Point(double a, double b) : x(a), y(b){};

//복사 생성자
Point::Point(const Point& other) : x(other.x), y(other.y){};