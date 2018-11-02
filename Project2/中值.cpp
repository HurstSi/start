#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c, middle;
	cin >> a >> b >> c;
	if (a >= b && a <= c)
		middle = a;
	else if (b >= a && b <= c)
		middle = b;
	else if (a > b)
		middle = b;
	else if (a < b)
		middle = a;
	cout << middle << endl;
	system("pause");
	return 0;
}
