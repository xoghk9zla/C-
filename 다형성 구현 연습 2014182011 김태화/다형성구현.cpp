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
	// 1. 관리 클래스를 만듦
	int n=0, del, d;
	bool  flag = true;
	ShapeManager sm(100);

	while(flag){
		switch(menu()){
		case 1:// 도형을 생성한다
			system("cls");
			switch (make()){
			case 1:// 삼각형을 생성 후 대입
				sm.insert(new Triangle());
				system("cls");
				cout << "삼각형이 생성 되었습니다." << endl << endl;
					break;
			case 2:// 사각형을 생성 후 대입
				sm.insert(new Rectangle(Point(0,0), Point(0, 0)));
				system("cls");
				cout << "사각형이 생성 되었습니다." << endl << endl;
					break;
			case 3:// 원을 생성 후 대입
				sm.insert(new Circle(Point(), 0));
				system("cls");
				cout << "원이 생성 되었습니다." << endl << endl;
					break;
			default:
					break;
			}	
			break;
		case 2:// 원하는 번째의 도형을 삭제
			system("cls");
			cout << "몇 번째 도형을 제거할까요?";
			cin >> del;
			sm.deleteI(del);
				break;	
		case 3:// 도형 클래스를 삭제
			system("cls");
			cout << "무슨 도형을 제거 할까요?( 삼각형-1, 사각형-2, 원-3 )";
			cin >> d;
			sm.deleteC(d);
			break;
		case 4:// 들어있는 모든 도형을 그림
			system("cls");
			sm.draw();
			break;
		case 5:// 프로그램을 종료
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
	
	cout << "1. 도형을 추가한다." << endl;
	cout << "2. 원하는 번째의 도형을 삭제한다." << endl;
	cout << "3. 도형을 삭제한다." << endl;
	cout << "4. 모든 도형을 그린다." << endl;
	cout << "5. 프로그램 종료." << endl;
	cout << "번호를 선택하세요. ";
	
	cin >> op;
	
	return op;
}

int make()
{
	int op;
	
	cout << "1. 삼각형을 추가한다." << endl;
	cout << "2. 사각형을 추가한다." << endl;
	cout << "3. 원을 추가한다." << endl;
	cout << "번호를 선택하세요. ";

	cin >> op;

	return op;
}