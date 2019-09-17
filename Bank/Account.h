#pragma once
class Account
{
private:
	int accountid;
	double balance;
	static double total;
protected:
	Account(Date date, int id);
	
	//double accumulate(Date date);
	int getID();
	double getbalance();
	double gettotal();

	void deposit(Date date, double amount);   //存款
	void withdraw(Date date, double amount);       //取款
	void show();   //显示余额
	void settle(Date date);
	double gettotal() { return total; }
public:
	void record(Date date, double amount);
};
