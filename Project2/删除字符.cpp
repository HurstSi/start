#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[80];
	int i;
	cout << "�����ַ���Ϊ:" << endl;
	//start
	//�����ַ���
	cin.getline(s, 81);
	for (i = 1; i <= 80; i++)
	{
		if (s[i] == 'T')
			for (int n = i; n <= 80; n++)
			{
				s[n] = s[n + 1];
				i--;
			}
	}
	//ɾ���ַ�'T'
	//endA
	cout << "ɾ��'T'�ַ�����ַ���:";
	cout << s << endl;
	return 0;
}