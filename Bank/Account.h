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

	void deposit(Date date, double amount);   //���
	void withdraw(Date date, double amount);       //ȡ��
	void show();   //��ʾ���
	void settle(Date date);
	double gettotal() { return total; }
public:
	void record(Date date, double amount);
};
