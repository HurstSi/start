#include <iostream>
using namespace std;
int main()
{
	int a[8];
	for (int i = 0; i < 8; i++)
		cin >> a[i];
	int max_i, min_i;

	cout << "���������8������:" << endl;

	cout << "���ֵ:" << a[max_i] << ",���ֵ�ǵ�" << max_i + 1 << "����" << endl;
	cout << "��Сֵ:" << a[min_i] << ",��Сֵ�ǵ�" << min_i + 1 << "����" << endl;
	cout << endl;
	return 0;
}