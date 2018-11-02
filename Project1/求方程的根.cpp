#include <iostream>
#include  <cmath>
using namespace std;
int main()
{
	float x1 = 0, x0 = 0, f1 = 0, f = 0;
	f = 3 * x1*x1*x1 + 2 * x1*x1 - 8 * x1 - 5;
	f1 = 9 * x1*x1 + 4 * x1 - 8;
	x1 = 1.5;
	x0 = x1 - f / f1;
	for (; abs(x1 - x0) > 1e-6;)
	{
		x0 = x1;
		x1 = x0 - f / f1;
		f = 3 * x1*x1*x1 + 2 * x1*x1 - 8 * x1 - 5;
		f1 = 9 * x1*x1 + 4 * x1 - 8;
	}
	cout << "该方程的根为：" << x1 << endl;
	system("pause");
	return 0;
}