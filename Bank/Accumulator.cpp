#include "Date.h"
#include "SavingAccount.h"
#include "Account.h"
#include "Accumulator.h"
#include <iostream>
using namespace std;

Accumulator::Accumulator(Date date, double value)
{
	lastdate = date;
	this->value = value;
}

double Accumulator::getSum(Date date) 
{
	return sum + value * date.distance(lastdate);
}

void Accumulator::change(Date date, double value) 
{
	//sum = getSum(date);
	lastdate = date;
	this->value = value;
}

void Accumulator::reset(Date date, double value) 
{
	lastdate = date;
	this->value = value;
	sum = 0;
}
