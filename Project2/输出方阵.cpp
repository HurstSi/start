#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "输入方阵的的行(列)值(1~10):" << endl;
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
	cout << "A方阵输出:" << endl;
	//start    
	//A方阵元素输出采用形式cout<<setw(6)<<A方阵元素

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
	//B方阵初始化
	//start
	//end
	//B方阵输出
	cout << "B方阵输出:" << endl;
	sum = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(6) << b[i][j];
		cout << endl;
	}
	//start
	//B方阵元素输出采用形式cout<<setw(6)<<B方阵元素
	//end
	system("pause");
	return 0;
}