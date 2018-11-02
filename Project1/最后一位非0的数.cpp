#include <iostream>
using namespace std;
int main()
{
	int n, i, s = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		s *= i;
		while (s % 10 == 0)
			s /= 10;
		s = s % 10;
	}
	cout << s;
	system("pause");
	return 0;
}
