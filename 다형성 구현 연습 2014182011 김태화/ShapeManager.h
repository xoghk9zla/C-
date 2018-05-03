#include "Shape.h"

class ShapeManager{
	int nShape;			//현재 보유한 도형의 갯수
	int capacity;			//담을 수 있는 최대 도형의 갯수
	Shape** shapes;	//도형의 포인터들을 담을 수 있는 메모리

public:
	explicit ShapeManager(int n);	//담을 수 있는 도형의 갯수가 인자인 생성자
	~ShapeManager();
	void insert(Shape*);	//도형을 추가하는 함수
	void deleteI(int);
	void deleteC(int);
	void draw();				//전체 도형을 그리는 함수
};
