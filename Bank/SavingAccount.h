#include "Accumulator.h"
#include "Account.h"

class SavingAccount : public Account
{
private:
	//int accountid;        //�˻�
	//double balance;       //���
	double rate;          //������
	Accumulator acc;
	//int lastDate;         //�����һ�α仯������
	//double accumulation;  //�����ۼ�֮��
	//static double total;  //�ܽ��
public:
	SavingAccount(Date date, int id, double rate);
	double getRate();
	void deposit(Date date, double amount);
	void withdraw(Date date, double amount);
	void settle(Date date);
	//double accumulate(double date); //��õ�ָ������λ�õĴ���ۼ�ֵ
	//double getBalance() { return balance; }
	//double getRate() { return rate; }
	//void record(int date, double amount);    //����
	//SavingAccount(int date, int id, double rate);    //���캯��
	
	//int accumulate(int date);
	//������Ϣ��ÿ��һ��һ�յ��ô˺���
};




