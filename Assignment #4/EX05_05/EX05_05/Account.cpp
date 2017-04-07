#include "Account.h"

Account::Account()
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

Account::Account(int Id, double Balance, double AnnualInterestRate)
{
	id = Id;
	balance = Balance;
	annualInterestRate = AnnualInterestRate;
}

Account::Account(string _name, int _id, double _balance)
{
	name = _name;
	id = _id;
	balance = _balance;
}

double Account::getMonthlyInterestRate()
{
	double monthlyInterestRate = annualInterestRate / 12;
	return monthlyInterestRate;
}

void Account::withdraw(double amount)
{
	balance -= amount;
	Date dateToday(2017, 4, 4);
	Transaction newTransaction('W', amount, balance, "withdrawal made");
	transactions.push_back(newTransaction);
}

void Account::deposit(double amount)
{
	balance += amount;
	Date dateToday(2017, 4, 4);
	Transaction newTransaction('D', amount, balance, "deposit made");
	transactions.push_back(newTransaction);
}

int Account::getID()
{
	return id;
}

int Account::setID(int ID)
{
	id = ID;
}

double Account::getBalance()
{
	return balance;
}

double Account::setBalance(double Balance)
{
	balance = Balance;
}

string Account::getName()
{
	return name;
}

int Account::setName(string Name)
{
	name = Name;
}