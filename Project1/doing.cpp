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
	return 0;
}
