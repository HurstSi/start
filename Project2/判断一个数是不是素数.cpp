#include<iostream>
using namespace std;
int prime(int n);          //函数声明
int main()
{
	int m;
	cout << "输入一个整数:" << endl;
	cin >> m;
	if (prime(m))     	//根据prime函数的返回值输出相应信息
		cout << m << "是素数";
	else
		cout << m << "不是素数";
	system("pause");
	return 0;
}
int prime(int n) {
	for (int i = 2; i < n; i++)
	{
		int a = 0, sum = 0;
		a = n % i;
		if (a == 0)
			sum = sum + 1;
		if (sum == 0) return 1;
		if (sum > 0) return 0;
	}
}
