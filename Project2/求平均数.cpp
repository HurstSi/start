//求平均值
#include<iostream>
using namespace std;
const int N = 30;
double average(int c[], int m)
{
	int sum = 0;
	for (int k = 0; k < m; k++)
	{
		sum = sum + c[k];
	}
	double average;
	average = (double)sum / m;
	return average;
}
int main()
{
	int c[N], n;
	cout << "输入数据的个数:" << endl;
	cin >> n;
	cout << "输入" << n << "个数据:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	average(c, n);
	cout << n << "个数的平均值为:" << average(c, n) << endl;//函数调用
	system("pause");
	return 0;
}