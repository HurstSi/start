#include<iostream>
using namespace std;
struct Date
{
	int year;
	int month;
	int day;
}date;
int r() {
	if (date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int sum = 0;
	int dd[13] = { 0,31,0,31,30,31,30,31,31,30,31,30,31 };
	cout << "input year,month,day:" << endl;
	cin >> date.year >> date.month >> date.day;
	if (date.year % 4 == 0 && date.year % 100 != 0 || date.year % 400 == 0)
		dd[2] = 29;
	else
		dd[2] = 28;
	for (int i = 1; i < date.month; i++)
		sum = sum + dd[i];
	sum = sum + date.day;
	cout << date.month << "/" << date.day << " is the " << sum << " th day in " << date.year << "." << endl;
	return 0;
}