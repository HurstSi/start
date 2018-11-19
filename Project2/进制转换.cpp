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
		cout << n << "转换为" << base << "进制的结果:";
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
		cout << n << "转换为" << base << "进制的结果:";
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
	//所需变量定义
	int n, choice;
	//endl
	while (1)
	{
		cout << "输入一个待转换的数(0表示结束):" << endl;
		cin >> n;
		if (n == 0) break;
		cout << "输入需要转换的进制(2或16):" << endl;
		cin >> choice;
		//start
		//调用转换函数
		Transform(n, choice);
		//endl
	}
	system("pause");
	return 0;
}