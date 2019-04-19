#include <iostream>  
using namespace std;
class Shape
{        	                		//����Shape�Ķ���
public:
	virtual double getArea() const = 0;	 	//���麯��
	void print() const;
	virtual ~Shape() { }			       	//����������
};
// Shape�ඨ�����
class Circle : public Shape
{
public:
	Circle(int = 0, int = 0, double = 0.0);
	virtual double getArea() const;     		//�������
	void print() const;  	                	//���Circle �����t
private:
	int x, y;        		                	//Բ������
	double radius;  		               		//Բ�뾶
};
//������Circle�������
class Rectangle : public Shape
{
public:
	Rectangle(int = 0, int = 0);
	virtual double getArea() const;
	void print() const;
private:
	int a, b;       		               			//���εĳ��Ϳ�
};
//������Rectangle�������
class Cube : public Shape		      	  //����һ��������
{
public:
	Cube(int = 0, int = 0, int = 0);     		//���캯��
	virtual double getArea() const;      	//�������
	void print() const;
private:
	int a, b, c;       		               			//���εĳ��Ϳ�
};
//������Cube�������
void Shape::print() const
{
	cout << "Base class Object" << endl;
}
//Shape��print()��������
Circle::Circle(int xValue, int yValue, double radiusValue)
{
	x = xValue;
	y = yValue;
	radius = radiusValue;
} 						           	//Circle�๹�캯��
double Circle::getArea() const
{
	cout << "Circle���getArea����, �����";
	return 3.14159 * radius * radius;
} 								        		//Circle��getArea()��������
void Circle::print() const
{
	cout << "center is ";
	cout << "x=" << x << ", y=" << y;
	cout << "; radius is " << radius << endl;
}
//Circle��print()��������
Rectangle::Rectangle(int aValue, int bValue)
{
	a = aValue;
	b = bValue;
} 					                    	// Rectangle�๹�캯��
double Rectangle::getArea() const
{
	//start
	//�����������ʾ��Ϣ��Rectangle���getArea����, ����ǡ�
	//��������ֵΪ�������
	//end
	cout << "Rectangle���getArea����, �����";
	return a * b;
} 					                   	// Rectangle��getArea()��������
void Rectangle::print() const
{
	cout << "hight is " << a;
	cout << ", width is " << b << endl;
}
// Rectangle��print()�������� 
Cube::Cube(int long_value, int weidth_value, int hight_value)
{
	a = long_value;
	b = weidth_value;
	c = hight_value;
} 					                    	// Rectangle�๹�캯��
double Cube::getArea() const
{
	//start
	//�����������ʾ��Ϣ��Cube���getArea����, ����ǡ�
	//��������ֵΪ���������
	//end
	cout << "Cube���getArea����, �����";
	return a * b*c;
} 					                   	// Rectangle��getArea()��������
void Cube::print() const
{
	cout << "long is " << a;
	cout << ", width is " << b;
	cout << ", height is " << c << endl;
}
// Rectangle��print()�������� 
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
		cout << "��������:����c����Circle�����, ����r����Rectangle�����, ����b����Cube�����" << endl;
		cin >> type;
		switch (type)
		{
		case 'c':
		{
			int xx, yy;
			double rr;
			cout << "������Բ�ĵ������Բ�İ뾶:" << endl;
			cin >> xx >> yy >> rr;
			ptr = new Circle(xx, yy, rr);
			break;
		}
		case 'r':
		{
			int aa, bb;
			cout << "��������εĳ��Ϳ�:" << endl;
			cin >> aa >> bb;
			ptr = new Rectangle(aa, bb);
			break;
		}
		case 'b':
		{
			int aa, bb, cc;
			cout << "������������ĳ�,��,��:" << endl;
			cin >> aa >> bb >> cc;
			ptr = new Cube(aa, bb, cc);
			break;
		}
		default:cout << "���ʹ���, ������ѡ��\n";
		}
	} while (ptr == NULL);
}
void display_area(Shape *ptr)
{
	//start
	//�����ʾ��Ϣ����ʾ��������������, ���õ��ǡ�
	//����������������getArea����
	//end
	cout << "��ʾ��������������, ���õ���" << endl;
	cout << ptr->getArea() << endl;
}
void delete_object(Shape *ptr)
{
	delete  ptr;
}