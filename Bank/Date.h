#pragma once
class Date
{
public:
	Date();
	//Date(int mn, int day, int yr);  // constructor
	Date(int tempdate);
	void setDate(int tempdate);
	void display();
	int GetDay();// function to display date
	int GetMonth();
	int GetYear();
	void SetMonth(int mn);
	bool isLeapYear();
	int distance(Date date);
	~Date();
private:
	int month, day, year, sumdays;
	int beforemonth[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
};