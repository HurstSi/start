#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m, n;
	cout << "猴子选大王(数组存储)" << endl << "==========================" << endl << endl;
	cout << "请输入猴子总数m:" << endl;
	cin >> m;

	cout << "请输入要选的间隔数n:" << endl;
	cin >> n;
	int monkey[1000];
	int monkey_out[1000];
	cout << "每个猴子的依次编号为:" << endl;
	for (int i = 0; i < m; i++) //猴子排序并输出
	{
		monkey[i] = i + 1;
		cout << setw(4) << monkey[i];
	}
	//cout << endl;
	int x = 1;  //出局选择器（当x计数到n时，出局一个猴子）
	if (n != 1)
	{
		for (int i = 0, j = 0, k = 0; i != m;)  //猴子出局（全部出局选拔结束）
		{
			if (monkey[j] != 0)
			{
				if (x != n)
				{
					j++;
					x++;
					if (j > n)
						j = 0;
				}
				else
				{
					monkey_out[k] = monkey[j];
					monkey[j] = 0;
					i++;  //出局计数
					j++;  //循环遍历
					x = 1;
					k++;
					if (j > n)
						j = 0;
				}
			}
			if (monkey[j] == 0)
			{
				j++;
			}
		}
		cout << "\n猴子离开的顺序如下:" << endl;
		for (int i = 0; i < m - 1; i++)
		{
			cout << setw(4) << monkey_out[i];
		}
		cout << endl;
		cout << endl;
		cout << "大王为:" << monkey_out[m - 1];
	}
	if (n == 1)
	{
		cout << "\n猴子离开的顺序如下:" << endl;
		for (int i = 0; i < m - 1; i++)
		{
			cout << setw(4) << monkey[i];
		}
		cout << endl;

		cout << "大王为:" << monkey[m - 1];

		cout << endl;
	}
	getchar();
	getchar();
	return 0;
}