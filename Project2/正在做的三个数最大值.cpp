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
	cout << "��������������Ϊ:";
	cin >> a >> b;
	cout << "���ֵΪ:" << max(a, b) << endl;//��������
	cout << "��������������Ϊ:";
	cin >> a >> b >> c;
	cout << "���ֵΪ:" << max(a, b, c) << endl; //��������
	cout << "����������˫������Ϊ:";
	cin >> m >> n;
	cout << "���ֵΪ:" << max(m, n) << endl;//��������
	cout << "����������˫������Ϊ:";
	cin >> m >> n >> t;
	cout << "���ֵΪ:" << max(m, n, t) << endl;//��������
	return 0;
}
int max(int a, int b)
{
	return (a >= b ? a : b);
}