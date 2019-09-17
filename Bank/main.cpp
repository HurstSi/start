
#include <iostream>
#include <cmath>
#include "SavingAccount.h"
#include "Date.h"
#include "Account.h"
#include "Accumulator.h"
using namespace std;

int main()
{
	SavingAccount s1(20000105, 11111, 0.015);
	s1.deposit(5, 5000);
	s1.deposit(45, 5500);
	s1.settle(90);
	//s1.show();
	//Date setdate();
	//Date mydate(20000915);
	//mydate.display();
	//cout<<s1.gettotal();
	system("pause");
	return 0;
}
