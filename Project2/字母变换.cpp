#include<iostream>
#include <cstring>
using namespace std;
inline char fun(char ch)// ��������
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
	while ((c = getchar()) != '\n')  //getchar()���������������������ַ�������Ϊ"�س�"ʱ����
	{
		cout << fun(c);
	}
	cout << "\n";
	system("pause");
	return 0;
}