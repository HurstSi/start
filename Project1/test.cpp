#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, a, b;
	int m, n, r, g = 0;
	cout << "����2����x,y��" << endl;
	cin >> x >> y;
	r = 1;
	m = (x >= y ? x : y);
	n = (x >= y ? y : x);
	a = m;
	b = n;
	while (r != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	g = a * b / m;
	cout << "���Լ����" << m << endl;
	cout << "��С��������" << g << endl;
	system("pause");
	return 0;
}