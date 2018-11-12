#include<iostream>
#include <cstdlib>   // 包含rand()函数的库
using namespace std;
int main()
{
	int x;
	int seed;
	int i = 1;
	cout << "please input the random seed" << endl;
	cin >> seed;
	srand(seed);   // 生成随机数初始化
	x = rand() % 999 + 1;      // 生成随机数x让人猜
	   //start
	cout << "please guess a number between 1 and 1000:" << endl;
	int a;
	cin >> a;
	while (a != seed)
	{
		if (seed > a)
		{
			cout << "Too high. Try again." << endl;
			cout << "please input the random seed" << endl;
			cin >> seed;
		}
		if (seed < a)
		{
			cout << "Too low. Try again." << endl;
			cout << "please input the random seed" << endl;
			cin >> seed;
		}
	}
	cout << "Excellent You guessed the number!\n" << endl;
	system("pause");
	return 0;
}