#include<iostream>
using namespace std;
int max(int a, int b);
//int max(int a, int b, int c);
//double max(double m, double n);
//double max(double m, double n, double t);
int main()
{
	int a, b, c;
	double m, n, t;
	cout << "请输入两个整数为:";
	cin >> a >> b;
	cout << "最大值为:" << max(a, b) << endl;//函数调用
	cout << "请输入三个整数为:";
	cin >> a >> b >> c;
	cout << "最大值为:" << max(a, b, c) << endl; //函数调用
	cout << "请输入两个双精度数为:";
	cin >> m >> n;
	cout << "最大值为:" << max(m, n) << endl;//函数调用
	cout << "请输入三个双精度数为:";
	cin >> m >> n >> t;
	cout << "最大值为:" << max(m, n, t) << endl;//函数调用
	return 0;
}
int max(int a, int b)
{
	return (a >= b ? a : b);
}