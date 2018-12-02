#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j;
	int a[2][3] = { 1,2,3,4,5,6 }, b[3][2];
	cout << "Ô­Ê¼¾ØÕó:" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			cout << setw(5) << a[i][j];
		cout << endl;
	}
	b[0][0] = a[0][0];
	b[1][0] = a[0][1];
	b[2][0] = a[0][2];
	b[0][1] = a[1][0];
	b[1][1] = a[1][1];
	b[2][1] = a[1][2];

	cout << "×ªÖÃ¾ØÕó:" << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			cout << setw(5) << b[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}