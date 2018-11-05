#include "iostream"
using namespace std;
int main()
{
	int m, r, a, b, sum = 0;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		r = 0;
		r = i * 100;
		a = r;
		for (int j = 0; j <= m; j++)
		{
			r = a;
			r = r + j * 10;
			b = r;
			if (j != i) {
				for (int k = 0; k <= m; k++)
				{
					r = b;
					r = r + k;
					if (k != j && k != i)
					{
						//cout << r << " ";
						r = r - 100;
						//cout << r << " ";
						if (r > 0 && r % 2 == 0)
						{
							sum = sum + 1;
						}
					}
				}
			}
		}
	}
	cout << sum;
	system("pause");
	return 0;
}