#pragma once
#include <iostream>
#include <string>
using namespace std;
 class Vector 
{
private : 
	double x;
	double y;
	double z;
public : 
	Vector(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	};
	Vector(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->z = 0;
	};
	Vector(int x)
	{
		this->x = x;
		this->y = 0;
		this->z = 0;
	};
	Vector()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	};
	void Print()
	{
		cout << "X : " << x << "\nY : " << y << "\nZ : " << z << endl;
	};
	void SetX(double x)
	{
		this->x = x;
	};
	void SetY(double y)
	{
		this->y = y;
	};
	void SetZ(double z)
	{
		this->z = z;
	};
	Vector operator +(Vector other)
	{
		Vector c;
		c.x = this->x + other.x;
		c.y = this->y + other.y;
		c.z = this->z + other.z;
		return c;
	};
	
};
 class Circle 
 {
 private :
	 double R;
	 string color;
 public:
	 Circle(double R , string color)
	 {
		 this -> R = R;
		 this -> color = color;
	 }
	 Circle (double R)
	 {
		 this-> R = R;
		 this->color = "Без цвета";
	 }
	 void Print()
	 {
		 setlocale(LC_ALL, "ru");
		 cout << "Радиус круга R : " << this->R <<endl;
		 cout << "Цвет круга : " << this->color << endl;
	 }
 };

