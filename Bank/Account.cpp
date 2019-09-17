#include "Date.h"
#include "SavingAccount.h"
#include "Account.h"
#include <iostream>
using namespace std;
Account::Account(Date date, int id)
{
	accountid = id;
	balance = 0;
	//Date newdate(date);
	date.display();
	cout << "#" << id << "is created" << endl;
}

void Account::record(Date date, double amount)
{
	/*accumulation = accumulate(date);
	lastDate = date;*/
	amount = round(amount * 100) / 100.00;
	balance += amount;
	total += amount;
	//Date newdate(date);
	cout << endl;
	date.display();
	cout << "\t#" << accountid << "\t" << amount << "\t" << balance << endl;
}

int Account::getID()
{
	return accountid;
}

double Account::getbalance()
{
	return balance;
}

double Account::gettotal()
{
	return total;
}

void Account::show() {
	cout << "#" << accountid << "\tBalance" << balance << "balance" << total << endl;
}

void Account::deposit(Date date, double amount) {};   //´æ¿î
void Account::withdraw(Date date, double amount) {};      //È¡¿î
void Account::settle(Date date) {};