#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "���뷽��ĵ���(��)ֵ(1~10):" << endl;
	cin >> n;
	int a[10][10] = { 0 }, b[10][10] = { 0 };
	int num = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
		{
			num++;
			a[i][j] = num;
		}
	num = 0;
	for (int i = 0; i < n; i++)
		for (int j = n - i; j <= n; j++)
		{
			num++;
			b[j][i] = num;
		}
	cout << "A�������:" << endl;
	//start    
	//A����Ԫ�����������ʽcout<<setw(6)<<A����Ԫ��

	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << a[i][j];
			sum++;
			if (sum == n)
			{
				cout << endl;
				sum = 0;
			}
		}

	//end
	//B�����ʼ��
	//start
	//end
	//B�������
	cout << "B�������:" << endl;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << b[i][j];
		cout << endl;
	}
	//start
	//B����Ԫ�����������ʽcout<<setw(6)<<B����Ԫ��
	//end
	system("pause");
	return 0;
}