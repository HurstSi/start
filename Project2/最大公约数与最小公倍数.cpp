#include<iostream>
using namespace std;
int CommonDivisor(int  m, int  n);
int LowestCommonMultiple(int  m, int  n);  //函数声明 
int main()
{
	int m, n;
	cout << "求最大公约数和最小公倍数,请输入m和n\n";
	cin >> m >> n;
	cout << "最大公约数为" << CommonDivisor(m, n) << ",最小公倍数为" << LowestCommonMultiple
	(m, n) << endl;
	//system("pause");
	return 0;
}
int CommonDivisor(int  m, int  n)
{
	int r = 1;
	while (r != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int LowestCommonMultiple(int  m, int  n)
{
	int g;
	g = m * n / CommonDivisor(m, n);
	return g;
}
