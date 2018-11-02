#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, a, b;
	int m, n, r, g = 0;
	cout << "输入2个数x,y：" << endl;
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
	cout << "最大公约数：" << m << endl;
	cout << "最小公倍数：" << g << endl;
	system("pause");
	return 0;
}