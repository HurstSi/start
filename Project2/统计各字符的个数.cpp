#include<iostream>
#include<stdio.h>
using namespace std;
//start
//ȫ�ֱ�������
//�������壬ʵ��ͳ�Ƹ��ַ��ĸ���
void total(char str[]) {
	int space = 0, digit = 0, alph = 0, others = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)space++;
		else if ((str[i] >= 48) && (str[i] <= 57))digit++;
		else if (((str[i] >= 97) && (str[i] <= 122)) || ((str[i] >= 65) && (str[i] <= 90)))alph++;
		else others++;

	}
	cout << "\n��ĸ����:" << alph << "\n���ָ���:" << digit << "\n�ո����:" << space << "\n�����ַ�����:" << others << endl;
}
//endl
int main()
{
	char str[100];
	cout << "�������ַ���:";
	//start
	//�ַ�������
	gets_s(str);
	//endl
	total(str);//��������

	system("pause");
	return 0;
}





/*#include<stdio.h>
#include<iostream>
void count(char *str);

int letters = 0, space = 0, digit = 0, others = 0;

int main(void)
{
	char str[100];
	printf("Input a string:\n");
	gets_s(str);
	count(str);
	printf("char=%d\nspace=%d\ndigit=%d\nothers=%d\n", letters, space, digit, others);
	system("pause");
	return 0;
}

void count(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a'&&*str <= 'z' || *str >= 'A'&&*str <= 'Z')
			letters++;
		else if (*str == ' ')
			space++;
		else if (*str >= '0'&&*str <= '9')
			digit++;
		else
			others++;
		str++;
	}
}*/