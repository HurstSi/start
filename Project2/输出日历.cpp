#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
void printmonth(int m);        // ��ӡÿ������
void printhead(int m);		//��ӡÿ�µ�����ͷ���ж���ʼλ�ã�
int daysofmonth(int m);		//ÿ�µ���������
int firstday(int y);		//�ж�ĳ��Ԫ�������ڼ�
int year, weekday;			// year��ʾ��ݣ�weekday��ʾ���ڼ�
int main()
{
	int i;

	cout << "���������:" << endl;
	cin >> year;
	cout << year << "������\n";
	weekday = firstday(year);
	for (i = 1; i <= 12; i++)
	{
		printmonth(i);
		cout << endl;
	}
	system("pause");
	return 0;
}
void printmonth(int m)  //��ӡÿ������
{
	int i, days;
	//start
	//���ô�ӡÿ������ͷ�ĺ���
	printhead(m);
	//���ú�����ÿ�µ�����
	days = daysofmonth(m);
	//end
	for (i = 1; i <= days; i++)
	{
		cout << setw(5) << i;
		if (weekday == 6)
		{
			weekday = 0;
			cout << endl;
		}
		else
			weekday++;

		//start
	//ÿ���һ�죬��ʾ���ڼ��ı���weekday�����ӣ�ÿ��7�����һ�����С�
	//end
	}
}
void printhead(int m) //��ӡÿ�µ�����ͷ���ж���ʼλ�ã�
{
	int i;
	cout << endl << setw(5) << m << "��" << endl;
	cout << setw(6) << "��" << setw(6) << "һ" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << setw(6) << "��" << endl;
	for (i = 0; i < weekday; i++)
		cout << setw(5) << " ";
}
int daysofmonth(int m)  //ÿ�µ���������
{
	int febr = 28;
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
		febr = 29;
	if (m == 2)
		return febr;
	else if (m <= 7 && m % 2 == 1 || m > 7 && m % 2 == 0)
		return 31;
	else
		return 30;
	//�����·�m��ֵ��ÿ�µ����������ǵ����Ƿ�Ϊ���꣬Ӱ��2�µ������������yearȫ�ֱ�������
}
int firstday(int year)  //�ж�ĳ��Ԫ�������ڼ�
{
	int t = year;
	//�������y��ֵ���Ԫ�������ڼ���0����������,1��������һ,��
	return ((t + (t - 1) / 4) - (t - 1) / 100 + (t - 1) / 400) % 7;
}