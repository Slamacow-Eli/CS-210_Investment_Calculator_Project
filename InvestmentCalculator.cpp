/*Elijah Herbert
* CS-210-T1114
* October 3, 2022
* Professor Rissover
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "InvestmentCalculator.h"//include class declarations to be defined here
using namespace std;

void investmentCalculator::yearlyInterestWithNoDeposits(double investment, double interest, int years) {//define yearlyInterestWithNoDeposits method
	double yearEndBalance, yearEndInterest, monthlyCompoundingInterest;
	int i;// local variabes
	yearEndBalance = investment;
	//menu top line
	menuFormatting(3, ' ');
	cout << "Balance and Interest Without Additional Monthly Deposits";
	menuFormatting(3, ' ');
	cout << endl;
	//menu dividing line
	menuFormatting(64, '=');
	cout << endl;
	//menu first row of investment data specificers
	menuFormatting(2, ' ');
	cout << "Year";
	menuFormatting(8, ' ');
	cout << "Year End Balance";
	menuFormatting(4, ' ');
	cout << "Year End Earned Interest";
	menuFormatting(4, ' ');
	cout << endl;

	menuFormatting(64, '-');
	cout << endl;
	//display investment data for the amount of years chosen
	for (i = 1; i <= years; i++) {
		//calculate monthly and yearly interest, and the year end balance
		monthlyCompoundingInterest = yearEndBalance * ((interest / 100) / 12);
		yearEndInterest = monthlyCompoundingInterest * 12;
		yearEndBalance = yearEndBalance + yearEndInterest;
		menuFormatting(3, ' ');
		cout << i;
		menuFormatting(18, ' ');
		cout << "$" << fixed << setprecision(2) << yearEndBalance;
		menuFormatting(24, ' ');
		cout << "$" << fixed << setprecision(2) << yearEndInterest << endl;
	}


}
void investmentCalculator::yearlyInterestWithDeposits(double investment, double deposit, double interest, int years) {
	double yearEndBalance, yearEndInterest, monthlyCompoundingInterest;//local variables
	int i;//for loop variable
	yearEndBalance = investment;
	//menu top line
	menuFormatting(3, ' ');
	cout << "Balance and Interest With Additional Monthly Deposits";
	menuFormatting(3, ' ');
	cout << endl;
	//menu dividing line
	menuFormatting(64, '=');
	cout << endl;
	//menu first row of investment data titles
	menuFormatting(2, ' ');
	cout << "Year";
	menuFormatting(8, ' ');
	cout << "Year End Balance";
	menuFormatting(4, ' ');
	cout << "Year End Earned Interest";
	menuFormatting(4, ' ');
	cout << endl;

	menuFormatting(64, '-');
	cout << endl;
	//display investment data for the amount of years chosen
	for (i = 1; i <= years; i++) {
		//calaculate monthly and yearly interest, and the year end balance with monthly deposits
		monthlyCompoundingInterest = (yearEndBalance + deposit) * ((interest / 100) / 12);
		yearEndInterest = monthlyCompoundingInterest * 12;
		yearEndBalance = yearEndBalance + yearEndInterest;
		menuFormatting(3, ' ');
		cout << i;
		menuFormatting(18, ' ');
		cout << "$" << fixed << setprecision(2) << yearEndBalance;
		menuFormatting(23, ' ');
		cout << "$" << fixed << setprecision(2) << yearEndInterest << endl;
	}
}
void investmentCalculator::menuFormatting(unsigned int n, char j) {//function to repeat characters a specific amount of times
	ostringstream bs;
	int i;

	for (i = 0; i <= n; i++) // for loop to specificy the amount of characters i want
	{
		bs << j;
	}

	cout << bs.str();

}