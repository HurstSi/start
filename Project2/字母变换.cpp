#include<iostream>
#include <cstring>
using namespace std;
inline char fun(char ch)// 函数定义
{
	if (ch >= 65 && ch <= 122) {
		ch = ch + 3;
		return ch;
	}
	else
		return ch;
}
int main()
{
	char c;
	cout << "please input a string:" << endl;
	while ((c = getchar()) != '\n')  //getchar()函数功能连续读入若干字符，输入为"回车"时结束
	{
		cout << fun(c);
	}
	cout << "\n";
	system("pause");
	return 0;
}