#include<iostream>
using namespace std;
int prime(int n);          //��������
int main()
{
	int m;
	cout << "����һ������:" << endl;
	cin >> m;
	if (prime(m))     	//����prime�����ķ���ֵ�����Ӧ��Ϣ
		cout << m << "������";
	else
		cout << m << "��������";
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
