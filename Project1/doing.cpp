#include <iostream>  
using namespace std;
class Shape
{        	                		//基类Shape的定义
public:
	virtual double getArea() const = 0;	 	//纯虚函数
	void print() const;
	virtual ~Shape() { }			       	//虚析构函数
};
// Shape类定义结束
class Circle : public Shape
{
public:
	Circle(int = 0, int = 0, double = 0.0);
	virtual double getArea() const;     		//返回面积
	void print() const;  	                	//输出Circle 类对象t
private:
	int x, y;        		                	//圆心坐标
	double radius;  		               		//圆半径
};
//派生类Circle定义结束
class Rectangle : public Shape
{
public:
	Rectangle(int = 0, int = 0);
	virtual double getArea() const;
	void print() const;
private:
	int a, b;       		               			//矩形的长和宽
};
//派生类Rectangle定义结束
class Cube : public Shape		      	  //创建一个立方体
{
public:
	Cube(int = 0, int = 0, int = 0);     		//构造函数
	virtual double getArea() const;      	//返回面积
	void print() const;
private:
	int a, b, c;       		               			//矩形的长和宽
};
//派生类Cube定义结束
void Shape::print() const
{
	cout << "Base class Object" << endl;
}
//Shape类print()函数定义
Circle::Circle(int xValue, int yValue, double radiusValue)
{
	x = xValue;
	y = yValue;
	radius = radiusValue;
} 						           	//Circle类构造函数
double Circle::getArea() const
{
	cout << "Circle类的getArea函数, 面积是";
	return 3.14159 * radius * radius;
} 								        		//Circle类getArea()函数定义
void Circle::print() const
{
	cout << "center is ";
	cout << "x=" << x << ", y=" << y;
	cout << "; radius is " << radius << endl;
}
//Circle类print()函数定义
Rectangle::Rectangle(int aValue, int bValue)
{
	a = aValue;
	b = bValue;
} 					                    	// Rectangle类构造函数
double Rectangle::getArea() const
{
	//start
	//语句完成输出提示信息“Rectangle类的getArea函数, 面积是”
	//函数返回值为矩形面积
	//end
	cout << "Rectangle类的getArea函数, 面积是";
	return a * b;
} 					                   	// Rectangle类getArea()函数定义
void Rectangle::print() const
{
	cout << "hight is " << a;
	cout << ", width is " << b << endl;
}
// Rectangle类print()函数定义 
Cube::Cube(int long_value, int weidth_value, int hight_value)
{
	a = long_value;
	b = weidth_value;
	c = hight_value;
} 					                    	// Rectangle类构造函数
double Cube::getArea() const
{
	//start
	//语句完成输出提示信息“Cube类的getArea函数, 面积是”
	//函数返回值为立方体面积
	//end
	cout << "Cube类的getArea函数, 面积是";
	return a * b*c;
} 					                   	// Rectangle类getArea()函数定义
void Cube::print() const
{
	cout << "long is " << a;
	cout << ", width is " << b;
	cout << ", height is " << c << endl;
}
// Rectangle类print()函数定义 
void creat_object(Shape *&ptr);
void display_area(Shape *ptr);
void delete_object(Shape *ptr);
int main()
{
	Shape *shape_ptr;
	creat_object(shape_ptr);
	display_area(shape_ptr);
	delete_object(shape_ptr);
	return 0;
}
void creat_object(Shape *&ptr)
{
	char type;
	ptr = NULL;
	do
	{
		cout << "创建对象:输入c创建Circle类对象, 输入r创建Rectangle类对象, 输入b创建Cube类对象" << endl;
		cin >> type;
		switch (type)
		{
		case 'c':
		{
			int xx, yy;
			double rr;
			cout << "请输入圆心的坐标和圆的半径:" << endl;
			cin >> xx >> yy >> rr;
			ptr = new Circle(xx, yy, rr);
			break;
		}
		case 'r':
		{
			int aa, bb;
			cout << "请输入矩形的长和宽:" << endl;
			cin >> aa >> bb;
			ptr = new Rectangle(aa, bb);
			break;
		}
		case 'b':
		{
			int aa, bb, cc;
			cout << "请输入立方体的长,宽,高:" << endl;
			cin >> aa >> bb >> cc;
			ptr = new Cube(aa, bb, cc);
			break;
		}
		default:cout << "类型错误, 请重新选择\n";
		}
	} while (ptr == NULL);
}
void display_area(Shape *ptr)
{
	//start
	//输出提示信息“显示所创建对象的面积, 调用的是”
	//输出对象面积，调用getArea函数
	//end
	cout << "显示所创建对象的面积, 调用的是" << endl;
	cout << ptr->getArea() << endl;
}
void delete_object(Shape *ptr)
{
	delete  ptr;
}