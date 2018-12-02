#include "iostream"
using namespace std;
void reverse(int);
int main()
{
	int n;
	cin >> n;
	reverse(n);
	system("pause");
	return 0;
}
void reverse(int n)
{
	int a, b, c, d, e, f;
	for (int i = 1; i <= 6; i++)
	{
		a = n % 10;
		n = n / 10;
		cout << a;
		if (n == 0) break;
	}
}