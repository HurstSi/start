#include<iostream>
using namespace std;
int CommonDivisor(int  m, int  n);
int LowestCommonMultiple(int  m, int  n);  //�������� 
int main()
{
	int m, n;
	cout << "�����Լ������С������,������m��n\n";
	cin >> m >> n;
	cout << "���Լ��Ϊ" << CommonDivisor(m, n) << ",��С������Ϊ" << LowestCommonMultiple
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
