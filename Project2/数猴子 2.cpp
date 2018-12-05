#include <iostream>
#include <iomanip>
using namespace std;
#define Max_size 1000
int main()
{
	int m;  //猴子的个数 
	int n;  //出圈数数的基数 
	int Monkey[Max_size] = { 0 };     //定义最多数的猴子，并初始化为0，表示现在都留下
	//start
	//添加必要的变量声明 
	//end
	cout << "猴子选大王(数组存储)" << endl << "==========================" << endl << endl;
	cout << "请输入猴子总数m:" << endl;
	cin >> m;
	cout << "请输入要选的间隔数n:" << endl;
	cin >> n;
	cout << "每个猴子的依次编号为:" << endl;
	//输出猴子的编号,建议采用“cout<<setw(4)<<XXX; ”，XXX表示猴子的序号
	//start
	for (int i = 1; i <= m; i++)
		cout << setw(4) << i;

	//end
	cout << "\n猴子离开的顺序如下:" << endl;
	//数数、出圈，并记录离开的顺序
	int num = m;
	int i = 0;
	int count = 0;


	while (num >= 1)
	{
		i++;
		if (Monkey[i] == 0)
		{
			count++;
			if (count%n == 0)
			{
				Monkey[i] = 1;
				num--;
				if (num > 0)
					cout << setw(4) << i;
				else if (num == 0)
					cout << endl << "\n大王为:" << i;
			}
		}
		if (i == m)
			i = 0;
	}
	//采用“cout<<setw(4)<<XXX”形式输出 
	//start
	//end
	cout << endl;
	//输出最后的大王,采用“cout<<"\n大王为:"<<XXX;”形式输出。

	//end
	system("pause");
	return 0;
}