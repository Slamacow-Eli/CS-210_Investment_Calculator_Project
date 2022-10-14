 /*Elijah Herbert
 * CS-210-T1114
 * October 3, 2022
 * Professor Rissover
 */

class investmentCalculator {//primary class
 public:
	 static void yearlyInterestWithNoDeposits(double investment, double interest, int years);//declare method to calculate yearly interest with no deposits

	 static void yearlyInterestWithDeposits(double investment, double deposit, double interest, int years);//declare method to calculate yearly interest with monthly eposits

	 static void menuFormatting(unsigned int n, char j);//method to repeat characters

};
struct {//struct that will act as global variables throughout the program
	int myNum;
	double myDub;
}investmentAmount, monthlyDeposit, annualInterest, numYears ;