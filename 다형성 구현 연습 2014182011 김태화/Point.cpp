#include "Point.h"

//����Ʈ ������
Point::Point() : x(0.0), y(0.0) {};

//���� �� ���� �޴� ������
Point::Point(double a, double b) : x(a), y(b){};

//���� ������
Point::Point(const Point& other) : x(other.x), y(other.y){};