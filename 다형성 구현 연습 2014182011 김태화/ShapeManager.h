#include "Shape.h"

class ShapeManager{
	int nShape;			//���� ������ ������ ����
	int capacity;			//���� �� �ִ� �ִ� ������ ����
	Shape** shapes;	//������ �����͵��� ���� �� �ִ� �޸�

public:
	explicit ShapeManager(int n);	//���� �� �ִ� ������ ������ ������ ������
	~ShapeManager();
	void insert(Shape*);	//������ �߰��ϴ� �Լ�
	void deleteI(int);
	void deleteC(int);
	void draw();				//��ü ������ �׸��� �Լ�
};
