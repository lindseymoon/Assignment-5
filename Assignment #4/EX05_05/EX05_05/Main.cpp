#include <iostream>
#include <string>
#include "Date.h"
#include "Account.h"
#include "Transaction.h"

using namespace std;

int main()
{
	Account a("George", 1122, 1000, .015);


	cout << "Account Holder Name: " << a.getName() << endl;
	cout << "Interest Rate: " << a.getMonthlyInterestRate() << endl;
	cout << "Balance: " << a.getBalance() << endl;

	a.deposit(30);
	a.deposit(40);
	a.deposit(50);

	a.withdraw(5);
	a.withdraw(4);
	a.withdraw(2);

}