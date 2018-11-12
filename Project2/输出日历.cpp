#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;
void printmonth(int m);        // 打印每月日历
void printhead(int m);		//打印每月的日历头（判定起始位置）
int daysofmonth(int m);		//每月的天数计算
int firstday(int y);		//判断某年元旦是星期几
int year, weekday;			// year表示年份，weekday表示星期几
int main()
{
	int i;

	cout << "请输入年份:" << endl;
	cin >> year;
	cout << year << "年日历\n";
	weekday = firstday(year);
	for (i = 1; i <= 12; i++)
	{
		printmonth(i);
		cout << endl;
	}
	system("pause");
	return 0;
}
void printmonth(int m)  //打印每月日历
{
	int i, days;
	//start
	//调用打印每月日历头的函数
	printhead(m);
	//调用函数求每月的天数
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
	//每输出一天，表示星期几的变量weekday需增加，每满7天输出一个换行。
	//end
	}
}
void printhead(int m) //打印每月的日历头（判定起始位置）
{
	int i;
	cout << endl << setw(5) << m << "月" << endl;
	cout << setw(6) << "日" << setw(6) << "一" << setw(6) << "二" << setw(6) << "三" << setw(6) << "四" << setw(6) << "五" << setw(6) << "六" << endl;
	for (i = 0; i < weekday; i++)
		cout << setw(5) << " ";
}
int daysofmonth(int m)  //每月的天数计算
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
	//根据月份m的值求每月的天数，考虑当年是否为闰年，影响2月的天数，年份用year全局变量给出
}
int firstday(int year)  //判断某年元旦是星期几
{
	int t = year;
	//根据年份y的值求出元旦是星期几（0代表星期日,1代表星期一,）
	return ((t + (t - 1) / 4) - (t - 1) / 100 + (t - 1) / 400) % 7;
}