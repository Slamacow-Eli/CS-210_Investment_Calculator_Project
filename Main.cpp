/*Elijah Herbert
* CS-210-T1114
* October 3, 2022
* Professor Rissover
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "InvestmentCalculator.h" // include class and methods
using namespace std;

void menuPrompt() {//function to display menu
	investmentCalculator::menuFormatting(33, '*');//top line
	cout << endl;
	investmentCalculator::menuFormatting(10, '*');
	cout << " Data Input ";//Data input, 2nd line
	investmentCalculator::menuFormatting(10, '*');
	cout << endl;

	cout << "Initial Investment Amount: $";//prompt user for investment amount
	cin >> investmentAmount.myDub;
	while (investmentAmount.myDub < 1 || cin.fail() ) {//conditional to check for non digit answers
		cin.clear();//clear cin stream
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Initial Investment Amount: $";//reprompt user for input
		cin >> investmentAmount.myDub;
	}

	cout << "Monthly Deposit: $";//prompt user for monthly deposit amount
	cin >> monthlyDeposit.myDub;
	while (monthlyDeposit.myDub < 1 || cin.fail()) {//conditional to check for non digit answers
		cin.clear();//clear cin stream
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Monthly Deposit: $";//reprompt user for user input
		cin >> monthlyDeposit.myDub;
	}

	cout << "Annual Interest: %";//prompt user for interest rate %
	cin >> annualInterest.myDub;
	while (annualInterest.myDub < 1 || cin.fail()) {//conditional to check for non digit answers
		cin.clear();//clear cin stream
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Annual Interest: %";//reprompt user for input
		cin >> annualInterest.myDub;
	}

	cout << "Number of years: ";//prompt user for number of years on investment
	cin >> numYears.myNum;
	while (numYears.myNum < 1 || cin.fail()) {//conditional to check for non digit answers
		cin.clear();//clear cin stream
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Number of years: ";//reprompt user for input
		cin >> numYears.myNum;
	}
	
	//cout << "Press any key to continue . . .";
	system("pause");
	cout << endl;
}
int main() {
	menuPrompt();//call menu
	cout << endl;
	investmentCalculator::yearlyInterestWithNoDeposits(investmentAmount.myDub, annualInterest.myDub, numYears.myNum);//call yearly interest display with no additional deposits
	cout << endl << endl << endl;
	investmentCalculator::yearlyInterestWithDeposits(investmentAmount.myDub, monthlyDeposit.myDub, annualInterest.myDub, numYears.myNum);//call yearly interest display with additonal deposits
}