#include  <iostream>
using namespace std;
int sort1(int &a, int &b, int &c)
{
	int t;
	if (a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (a > c)
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)
	{
		t = c;
		c = b;
		b = t;
	}
	return 0;
}
int sort2(int *s1, int *s2, int *s3)
{
	int t;
	if (*s1 > *s2)
	{
		t = *s2;
		*s2 = *s1;
		*s1 = t;
	}
	if (*s1 > *s3)
	{
		t = *s3;
		*s3 = *s1;
		*s1 = t;
	}
	if (*s2 > *s3)
	{
		t = *s3;
		*s3 = *s2;
		*s2 = t;
	}
	return 0;
}
int main()
{
	int a = 3, b = 2, c = 1;
	int *s1 = &a, *s2 = &b, *s3 = &c;
	sort1(a, b, c);
	cout << a << ' ' << b << ' ' << c << endl;
	a = 3; b = 2; c = 1;
	sort2(s1, s2, s3);
	cout << a << ' ' << b << ' ' << c << endl;
	system("pause");
	return 0;
}


/*�� ����sort1()���βζ���Ϊ���ã�����sort2()���βζ���Ϊָ�룬�ֱ�ʵ�ֺ���sort1()��sort2()��

��˼·��
�� ����sort1()���βζ���Ϊ���ã������ں���sort1()�ڲ�ֱ�ӽ��б���ֵ�Ľ�����

�� ����sort2()���βζ���Ϊָ�룬����ָ���ָ���ں���sort2()�ڲ����б���ֵ�Ľ�����*/