#include<iostream>
#include <cmath>
#include<math.h>
using namespace std;
void root(float a, float b);
void root(float a, float b, float d);
void root1(float a, float b, float d);
void print(float b, float c);
void print(float a, float b, float c);
int main()
{
	//start
 //��������
 //end
	float a, b, c, d;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	d = b * b - 4 * a*c;
	cout << "the equation is ";
	if (fabs(a) < 1e-6)
		print(b, c);
	else if (fabs(d) <= 1e-6)    //������������ȵ�ʵ��
	{
		print(a, b, c);
		root(a, b);
	}
	else if (d > 1e-6)      	//��������������ȵ�ʵ��
	{
		print(a, b, c);
		root(a, b, d);
	}
	else        				//�������������
	{
		print(a, b, c);
		root1(a, b, d);
	}
	system("pause");
	return 0;
}
//�����ʵ������
void root(float a, float b)
{
	cout << "has two equal roots:\n";
	cout << "x1=x2=" << -b / (2 * a) << endl;
}
//�󷽳�����������ȵ�ʵ������
void root(float a, float b, float d)
{
	float x1, x2;
	//start
	x1 = (-b + sqrt(d)) / 2 * a;
	x2 = (-b - sqrt(d)) / 2 * a;
	//end
	cout << "has two real roots:\n";
	cout << "x1=" << x1 << ",x2=" << x2 << endl;
}
//�󷽳��������������
void root1(float a, float b, float d)
{
	//start
	float x1, x2, jp, ip;
	jp = -b / (2 * a);
	ip = sqrt(-d) / (2 * a);
	//end
	cout << "has two complex roots:\n";
	cout << "x1=" << jp << "+" << ip << "i\n";
	cout << "x2=" << jp << "-" << ip << "i\n";
}
//���a=0ʱ���̵ĺ���
void print(float b, float c)
{
	cout << b << "x+" << c << "=0\n";
	cout << " not quadratic\n";
}
//���a������0ʱ���̵ĺ���
void print(float a, float b, float c)
{
	cout << a << "x*x+" << b << "x+" << c << "=0\n";
}