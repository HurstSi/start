#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, sum, i, m, num;
	cin >> m;
	n = 1;
	num = 0;
	sum = 0;
	while (n < m)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n%i == 0)
			{
				sum = sum + i;
				//cout << sum << " ";
			}
		}
		if (sum == n)
		{
			cout << n << " ";
			num = num + 1;
		}
		n++;
	}
	cout << "\n共有完全数" << num << "个" << endl;
	system("pause");
	return 0;
}