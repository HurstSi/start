#include "Date.h"
#include "SavingAccount.h"
#include <iostream>
using namespace std;
int max(int a, int b)
{
	if (a > b) return(a); else return (b);
}

int min(int a, int b)
{
	if (a > b) return(b); else return (a);
}

Date::Date()
{
	month = day = year = 1;
}

void Date::setDate(int tempdate)
{
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int yr = tempdate / 10000;
	int mn = tempdate / 100 % 100;
	int dy = tempdate % 100;

	if (mn >= 1 && mn <= 12)
	{
		month = max(1, mn);
		month = min(month, 12);
	}
	else cout << "Invalid month:" << mn << endl;

	if (dy >= 1 && dy <= length[month])
	{
		day = max(1, dy);
		day = min(day, length[month]);
	}
	else cout << "Invalid day:" << dy << endl;

	year = max(1, yr);

	int temp = year - 1;
	sumdays = temp * 365 + temp / 4 - temp / 100 + temp / 400 + beforemonth[month - 1] + day;
}

Date::Date(int tempdate)
{
	static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int yr = tempdate / 10000;
	int mn = tempdate / 100 % 100;
	int dy = tempdate % 100;

	if (mn >= 1 && mn <= 12)
	{
		month = max(1, mn);
		month = min(month, 12);
	}
	else cout << "Invalid month:" << mn << endl;

	if (dy >= 1 && dy <= length[month])
	{
		day = max(1, dy);
		day = min(day, length[month]);
	}
	else cout << "Invalid day:" << dy << endl;

	year = max(1, yr);

	int temp = year - 1;
	sumdays = temp * 365 + temp / 4 - temp / 100 + temp / 400 + beforemonth[month - 1] + day;
	if (isLeapYear() && month > 2) sumdays++;
}

void Date::display()
{
	cout << '\n' << day << ' ' << month << "," << year << '\n';

	cout << '\n' << year;
	if (month / 10 == 0)
		cout << "0" << month;
	else cout << month;
	if (day / 10 == 0)
		cout << "0" << day;
	else cout << day;
}

Date::~Date()
{
}

int Date::GetMonth()
{
	return month;
}
int Date::GetDay()
{
	return day;
}
int Date::GetYear()
{
	return year;
}
bool Date::isLeapYear() 
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

void Date::SetMonth(int mn)
{
	month = max(1, mn);
	month = min(month, 12);
}

int Date::distance(Date date)
{
	return sumdays - date.sumdays;
}