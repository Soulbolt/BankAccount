// bankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstdlib>
#include "bankAccount.h"
using namespace std;

int main()
{

	string name;
	string lastName;
	string accountTyp;
	string balance;
	double interestRate;
	int choice = 0;
	int accountNumber = rand() %  100000;

	while (true)
	{
		cout << "###############################################" << endl;
		cout << "#  Enter one of the following:				   #" << endl;
		cout << "#  1) Enter 1 to add a new customer.		   #" << endl;
		cout << "#  2) Enter 2 for an exisitng customer.       #" << endl;
		cout << "#  3) Enter 3 to print customers data.        #" << endl;
		cout << "#  9) Enter 9 to exist program.			   #" << endl;
		cout << "###############################################" << endl;

		cin >> choice;

		if (choice == 9)
			break;
		else
		{
			switch (choice)
			{
			case 1:
				cout << "Enter customer's name: " << endl;
				cin >> name >> lastName;
				cout << "Enter account type (checking/savings): " << endl;
				cin >> accountTyp;
				cout << "Enter amount to be deposited to open account: " << endl;
				cin >> balance;
				cout << "Enter interest rate (as a percent): " << endl;
				cin >> interestRate;
				break;

			case 2:
				cout << "Enter balance for account #" << endl;
				break;

			case 3:
				cout << "Account Holder Name: " << name << lastName << endl;
				cout << "Acount Type: " << accountTyp << endl;
				cout << "Account Number: " << accountNumber << endl;
				cout << "Balance: $" << balance << endl;
				cout << "Interest Rate: " << interestRate << endl;
				cout << "**************************************" << endl;
				break;

			default:
				cout << "Invalid entry." << endl;


			}
	
		}
		
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
