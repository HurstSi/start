#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j;
	int a[20];
	a[0] = 0;
	cout << "请输入各整型数据，-1结束:" << endl;
	for (i = 0; a[i] != -1; i++)
	{
		cin >> a[i];
		if (a[i] == -1)
			break;
	}
	cout << "输出数组里的数据:" << endl;
	for (j = 0; j < i; j++)
		cout << setw(5) << a[j];
	cout << endl;
	return 0;
}