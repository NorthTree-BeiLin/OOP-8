#include "point.h"

point::point()
{
	//cout << "调用无参构造函数！" << endl;

}
point::point(double a, double b)
{
	x = a;
	y = b;
	//cout << "调用有参构造函数！" << endl;
}
point::~point()
{
	//cout << "调用析构函数！" << endl;
	//getchar();

}
double point:: GetX()
{
	return x;

}
double point:: GetY()
{
	return y;
}
void point::SetXY(double ax,double ay)
{
	x = ax;
	y = ay;
}
void point::display()
{
	cout << "x:" << x << "\ty:" << y << endl;
}
void point::SwapAxis(double *xa, double *xb)
{
	x = *xa;
	y = *xb;
}

/*void point::SwapPoint(double &xa, double &xb)
{
	x = xa;
	y = xb;
}*/
void GetLength(point &A,point &B)
{
	double a1, a2, b1, b2;
	a1= A.GetX();
	a2 = A.GetY();
	b1 = B.GetX();
	b2 = B.GetY();
	cout << "(" << a1 << "," << a2 << ")与(" << b1 << "," << b2 << ")的距离是：\t";
	cout<< sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2)) << endl;
}

