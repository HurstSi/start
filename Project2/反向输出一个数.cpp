#include "iostream"
using namespace std;
void reverse(int);
int main()
{
	//write your codes
	int n;
	cin >> n;
	reverse(n);
	system("pause");
	return 0;
}
void reverse(int n)
{
	int m, t = 0;
	for (int x = 1; n / x % 10 != 0; x *= 10)
	{
		m = n / x % 10;
		t = t * 10 + m;
	}
	cout << t;
}