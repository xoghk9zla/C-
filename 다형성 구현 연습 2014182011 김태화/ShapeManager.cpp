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
	case 1:// �ﰢ�� Ŭ���� ����
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
	case 2:// �簢��
		for (int i = 0; i < nShape; ++i)
		{
			if (shapes[i]->id == 2)
				deleteI(i);
		}
		break;
	case 3:// ��
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
	cout << "�׸��⸦ �����մϴ�." << endl;
	cout << "�ִ� " << capacity << "���� ������ ���� �� �ֽ��ϴ�." << endl;
	cout << "��� " << nShape << "���� ������ �ֽ��ϴ�." << endl;
	cout << "----------------------------------------------------" << endl << endl;

	for(int i=0; i<nShape; ++i){
		cout << "[" << i+1 << "] ";
		shapes[i]->draw();
	}
	cout << endl;

	cout << "�׸��⸦ ��Ĩ�ϴ�." << endl << endl;
};