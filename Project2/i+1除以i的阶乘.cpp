#include<iostream>
#include<cstring>
using namespace std;
double factorial(double n)
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
	double sum = 0;
	double i = 0;
	do
	{
		i++;
		sum += ((i + 1) / factorial(i));
	} while (((i + 1) / factorial(i)) >= 1e-6);

	//end
	cout << "满足条件的求和为:" << sum << endl;
	//system("pause");
	return 0;
}