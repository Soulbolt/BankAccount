#include "bankAccount.h"
#include <stdlib.h>
#include <iostream>
//#include <sstream>
#include <iomanip>

using namespace std;


bankAccount::bankAccount(string name, int accountNumber, string accountType, double balance, double interestRate)
{
	this->name = name;
	balance = 0;
	//accountNumber = nextAccountNumber++;
}

void bankAccount::setName(string newName)
{
	name = newName;
}

string bankAccount::getName()
{
	return name;
}

string bankAccount::setAccountType()
{
	return string();
}

string bankAccount::getAccountType()
{
	return string();
}

double bankAccount::setBalance(double newBalance)
{
	return balance;
}
double bankAccount::getBalance()
{
	return balance;
}

double bankAccount::setInterestRate(double newInterestRate)
{
	return interestRate;
}
double bankAccount::getInterestRate()
{
	return interestRate;
}

void bankAccount::deposit(double amount)
{
	return deposit(amount);
}
