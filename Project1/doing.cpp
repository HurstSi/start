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
	return 0;
}
