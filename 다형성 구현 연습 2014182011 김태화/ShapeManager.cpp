#include <iostream>
#include "ShapeManager.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;
//----------------------------------------
ShapeManager::ShapeManager(int n)
//----------------------------------------
{
	nShape = 0;
	capacity = n;
	shapes = new Shape*[capacity];
}

//----------------------------------------
ShapeManager::~ShapeManager()
//----------------------------------------
{
	delete[] shapes;
};

//----------------------------------------
void ShapeManager::insert(Shape* a)
//----------------------------------------
{
	shapes[nShape] =a;
	nShape++;
};
//----------------------------------------
void ShapeManager::deleteI(int d)
//----------------------------------------
{
	for (; d < nShape; ++d)
		shapes[d - 1] = shapes[d];
	if(nShape > 0)
		nShape--;
}; 
//----------------------------------------
void ShapeManager::deleteC(int d)
//----------------------------------------
{
	bool flag=true;
	int n=0;
	switch(d){
	case 1:// 삼각형 클래스 비우기
		for (int i = 0; i < nShape; ++i)
		{	
			if (shapes[i]->id != 1){
				for (; i < nShape; ++i)
					shapes[i] = shapes[i+1];
				if (nShape > 0)
					nShape--;
			}
		}
		break;
	case 2:// 사각형
		for (int i = 0; i < nShape; ++i)
		{
			if (shapes[i]->id == 2)
				deleteI(i);
		}
		break;
	case 3:// 원
		for (int i = 0; i < nShape; ++i)
		{
			if (shapes[i]->id == 3)
				deleteI(i);
		}
		break;
	case 4:
		flag = false;
		break;
	default:
		break;
	}
};
//----------------------------------------
void ShapeManager::draw()
//----------------------------------------
{
	cout << "----------------------------------------------------" << endl;
	cout << "그리기를 시작합니다." << endl;
	cout << "최대 " << capacity << "개의 도형을 담을 수 있습니다." << endl;
	cout << "모두 " << nShape << "개의 도형이 있습니다." << endl;
	cout << "----------------------------------------------------" << endl << endl;

	for(int i=0; i<nShape; ++i){
		cout << "[" << i+1 << "] ";
		shapes[i]->draw();
	}
	cout << endl;

	cout << "그리기를 마칩니다." << endl << endl;
};