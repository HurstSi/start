#include <iostream>
#include<iomanip>
using namespace std;
int password(const int &key);
int main()
{
	if (password(123456))
		cout << "Welcome!" << endl;
	else
		cout << "Sorry." << endl;
	system("pause");
	return 0;
}
int password(const int &key)
{
	static int n = 0;
	int k;
	cout << "Please input your password" << endl;
	cin >> k;
	n++;
	if (n < 3)
		if (k == key)
			return 1;
		else
			password(key);
	else
		if (k != key)
			return 0;
}