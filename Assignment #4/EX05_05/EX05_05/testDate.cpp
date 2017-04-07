//////////////
//
//CS172--Assignment #5
//EX05_01
//Exercise 12.25: New_Account_Class
//
//////////////

#include <iostream>
#include "Date.h"

using namespace std;

void printDate(const Date& date)
{
	cout << date.getYear()
		<< "/" << date.getMonth()
		<< "/" << date.getDay() << endl;
}

int main()
{
	Date d1;
	printDate(d1);

	Date d2(555550);
	printDate(d2);

	Date d3(555555550);
	printDate(d3);

	Date d4;
	d4.setDate(955555550);
	printDate(d4);
}