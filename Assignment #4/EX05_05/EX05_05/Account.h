#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Account
{
private:
	int id;
	double balance;
	string name;

public:
	static double annualInterestRate;
	vector<Transaction> transactions;
	Account();
	Account(int id, double balance, double annualInterestRate);
	Account(string name, int id, double balance);
	double getMonthlyInterestRate();
	void setMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);
	int getID();
	int setID();
	double getBalance();
	double setBalance(double Balance);
	string getName();
	int setName(string name);
};

#endif