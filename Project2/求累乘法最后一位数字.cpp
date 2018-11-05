#include <iostream>
using namespace std;
int main()
{
	int n, i, j, s = 1, sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1, s = 1; j <= i; j++)
		{
			s *= j;
		}
		sum += s;
	}
	cout << sum;
	return 0;
}