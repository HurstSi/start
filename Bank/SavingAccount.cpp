#include "SavingAccount.h"
#include "Date.h"
#include "Account.h"
#include "Account.cpp"

#include <iostream>
using namespace std;
int Add(int a, int b)
{
	return a + b;
}
SavingAccount::SavingAccount(Date date, int id, double rate) 
{
	//super(date, id);
	rate = rate;
	acc = Accumulator(date, 0);
}
double SavingAccount::getRate() 
{
	return rate;
}
void SavingAccount::deposit(Date date, double amount) 
{
	record(date, amount);
	acc.change(date, getBalance());
}
void SavingAccount::withdraw(Date date, double amount)
{
	if (amount > getBalance()) {
		cout<<"not enough money";
	}
	else {
		record(date, -amount);
		acc.change(date, getBalance());
	}
}
void SavingAccount::settle(Date date) 
{
	double interest = acc.getSum(date) * rate / date.distance(new Date(date.getYear() - 1, 1, 1));	//¼ÆËãÄêÏ¢
	if (interest != 0) {
		record(date, interest, "interest");
	}
	acc.reset(date, getBalance());
}


//double SavingAccount::total = 0;
/*SavingAccount::SavingAccount(int date, int id, double rate):accountid(id), balance(0), rate(rate), lastDate(date), accumulation(0) {
	Date newdate(date);
	//newdate.setDate(date);
	newdate.display();
	//new Date::Date(date);
	cout << "#" << id << "is created" << endl;
}
double SavingAccount::accumulate(double date) {
	return accumulation + balance * (date - lastDate);
}
void SavingAccount::record(int date, double amount) {
	accumulation = accumulate(date);
	lastDate = date;
	amount = round(amount * 100) / 100.00;
	balance += amount;
	total += amount;
	cout << date << "\t#" << accountid << "\t" << amount << "\t" << balance << endl;
}
void SavingAccount::deposit(int date, double amount) {
	record(date, amount);
}
void SavingAccount::withdraw(int date, double amount) {
	if (amount > balance)
		cout << "not enough money" << endl;
	else
		record(date, -amount);
}
void SavingAccount::show() {
	cout << "#" << accountid << "\tBalance" << balance << "balance"<<total<<endl;
}
void SavingAccount::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)
		record(date, interest);
	accumulation = 0;
}*/