#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i, j;
	int a[20];
	a[0] = 0;
	cout << "��������������ݣ�-1����:" << endl;
	for (i = 0; a[i] != -1; i++)
	{
		cin >> a[i];
		if (a[i] == -1)
			break;
	}
	cout << "��������������:" << endl;
	for (j = 0; j < i; j++)
		cout << setw(5) << a[j];
	cout << endl;
	return 0;
}