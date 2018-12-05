#include <iostream>
using namespace std;
int main()
{
	int a[8];
	for (int i = 0; i < 8; i++)
		cin >> a[i];
	int max_i, min_i;

	cout << "输入数组的8个整数:" << endl;

	cout << "最大值:" << a[max_i] << ",最大值是第" << max_i + 1 << "个数" << endl;
	cout << "最小值:" << a[min_i] << ",最小值是第" << min_i + 1 << "个数" << endl;
	cout << endl;
	return 0;
}