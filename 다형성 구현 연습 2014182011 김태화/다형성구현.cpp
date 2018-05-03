#include "Point.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeManager.h"
#include <iostream>

using namespace std;

int menu();
int make();
//----------
int main()
//----------
{
	// 1. ���� Ŭ������ ����
	int n=0, del, d;
	bool  flag = true;
	ShapeManager sm(100);

	while(flag){
		switch(menu()){
		case 1:// ������ �����Ѵ�
			system("cls");
			switch (make()){
			case 1:// �ﰢ���� ���� �� ����
				sm.insert(new Triangle());
				system("cls");
				cout << "�ﰢ���� ���� �Ǿ����ϴ�." << endl << endl;
					break;
			case 2:// �簢���� ���� �� ����
				sm.insert(new Rectangle(Point(0,0), Point(0, 0)));
				system("cls");
				cout << "�簢���� ���� �Ǿ����ϴ�." << endl << endl;
					break;
			case 3:// ���� ���� �� ����
				sm.insert(new Circle(Point(), 0));
				system("cls");
				cout << "���� ���� �Ǿ����ϴ�." << endl << endl;
					break;
			default:
					break;
			}	
			break;
		case 2:// ���ϴ� ��°�� ������ ����
			system("cls");
			cout << "�� ��° ������ �����ұ��?";
			cin >> del;
			sm.deleteI(del);
				break;	
		case 3:// ���� Ŭ������ ����
			system("cls");
			cout << "���� ������ ���� �ұ��?( �ﰢ��-1, �簢��-2, ��-3 )";
			cin >> d;
			sm.deleteC(d);
			break;
		case 4:// ����ִ� ��� ������ �׸�
			system("cls");
			sm.draw();
			break;
		case 5:// ���α׷��� ����
			flag = false;
			break;			
		default:
			break;
		}
	}	
}

int menu()
{
	int op;
	
	cout << "1. ������ �߰��Ѵ�." << endl;
	cout << "2. ���ϴ� ��°�� ������ �����Ѵ�." << endl;
	cout << "3. ������ �����Ѵ�." << endl;
	cout << "4. ��� ������ �׸���." << endl;
	cout << "5. ���α׷� ����." << endl;
	cout << "��ȣ�� �����ϼ���. ";
	
	cin >> op;
	
	return op;
}

int make()
{
	int op;
	
	cout << "1. �ﰢ���� �߰��Ѵ�." << endl;
	cout << "2. �簢���� �߰��Ѵ�." << endl;
	cout << "3. ���� �߰��Ѵ�." << endl;
	cout << "��ȣ�� �����ϼ���. ";

	cin >> op;

	return op;
}