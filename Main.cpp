#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double x, y, z;
	cout << "¬ведите координаты вектора :" << endl;
	cout << "x : " ;
	cin >> x;
	cout << "y : " ;
	cin >> y;
	cout << "z : " ;
	cin >> z;
	Vector a(x,y,z);
	a.Print();
	double R;
	string color;
	cout << "¬ведите радиус круга : ";
	cin >> R;
	cout << "¬ведите цвет круга(на английском) :";
	cin >> color;
	Circle b(R , color);
	b.Print();

}
