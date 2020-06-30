#pragma once
#include <string>

using namespace std;

class bankAccount
{
public:

	bankAccount(string name, int accountNumber, string accountType, double balance, double interestRate);
	
	string name;
	int accountNumber;
	string accountType;
	double balance;
	double interestRate;
	void deposit(double amount);


	void setName(string newName);

	string getName();
	
	string setAccountType();
	
	string getAccountType();

	double setBalance(double newBalance);

	double getBalance();

	double setInterestRate(double newInterestRate);

	double getInterestRate();

};
