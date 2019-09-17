#include "Accumulator.h"
#include "Account.h"

class SavingAccount : public Account
{
private:
	//int accountid;        //账户
	//double balance;       //余额
	double rate;          //年利率
	Accumulator acc;
	//int lastDate;         //余额上一次变化的日期
	//double accumulation;  //余额按日累加之和
	//static double total;  //总金额
public:
	SavingAccount(Date date, int id, double rate);
	double getRate();
	void deposit(Date date, double amount);
	void withdraw(Date date, double amount);
	void settle(Date date);
	//double accumulate(double date); //获得到指定日期位置的存款累计值
	//double getBalance() { return balance; }
	//double getRate() { return rate; }
	//void record(int date, double amount);    //记账
	//SavingAccount(int date, int id, double rate);    //构造函数
	
	//int accumulate(int date);
	//结算利息，每年一月一日调用此函数
};




