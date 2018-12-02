#include<iostream>
using namespace std;
int factorial(int n)
{

	for (double i = 1; i <= n; i++)
	{
		static double c = 1;
		c *= i;
		if (i == n)
		{
			double cc = c;
			c = 1;
			return cc;
		}
	}
}
int main()
{
	int i, n;
	cin >> n;

	for (i = 1; i <= n; i++)
		cout << factorial(i) << endl;
	system("pause");
	return 0;
}
