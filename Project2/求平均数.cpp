//��ƽ��ֵ
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
	cout << "�������ݵĸ���:" << endl;
	cin >> n;
	cout << "����" << n << "������:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	average(c, n);
	cout << n << "������ƽ��ֵΪ:" << average(c, n) << endl;//��������
	system("pause");
	return 0;
}