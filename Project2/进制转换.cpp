#include<iostream>
using namespace std;
void Transform(int n, int base)
{
	int over, a[1000] = { 0 }, i, j = 0;
	i = n;
	over = base;
	if (base == 2)
	{
		while (i)
		{
			a[j] = i % 2;
			i = i / 2;
			j++;
		}
		cout << n << "ת��Ϊ" << base << "���ƵĽ��:";
		for (int k = j - 1; k >= 0; k--)
		{
			cout << a[k];
		}
	}
	else if (base == 16)
	{
		//cout << "wlsfajdsfksadlfkjdsa";
		while (i)
		{
			a[j] = i % 16;
			i = i / 16;
			j++;
		}
		cout << n << "ת��Ϊ" << base << "���ƵĽ��:";
		for (int k = j - 1; k >= 0; k--)
		{
			cout << a[k];
		}
	}
	cout << endl;
}
int main()
{
	//start
	//�����������
	int n, choice;
	//endl
	while (1)
	{
		cout << "����һ����ת������(0��ʾ����):" << endl;
		cin >> n;
		if (n == 0) break;
		cout << "������Ҫת���Ľ���(2��16):" << endl;
		cin >> choice;
		//start
		//����ת������
		Transform(n, choice);
		//endl
	}
	system("pause");
	return 0;
}