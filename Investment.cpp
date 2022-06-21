# include "Investment.h"
#include <string>
#include <iomanip>
#include <math.h>

/*prints off two tables. One with monthly deposits, one without monthly deposits
I could not get te formatting to work correctly so that is definitely needs to be fixed*/
void Investment::PrintTable(int years, double yearEndBalance, double yearEndInterestAmount) {
	cout << fixed << setprecision(2);
	if (years == 1) {
		cout << "Balance and Interest With Additional Monthly Deposits" << endl;
		cout << "Year" << "     " << "Year End Balance" << "       " << "Year End Earned Interest" << endl;
	}
	cout << years << "             " << yearEndBalance << "           " << yearEndInterestAmount << endl;
}

/*calculate monthly interest*/
double Investment::MonthlyInterest(double openingAmount, double monthlyDeposit, double annualInterest) {
	return (openingAmount + monthlyDeposit) * ((annualInterest / 100) / 12);
}


/*Caculates the yearly amount with interest*/
void Investment::YearlyAmount(double interest, double initialAmount, double monthlyDeposit, int years) {
	double previousAmount = initialAmount;
	for (int year = 1; year <= years; year++) {
		double yearlyInterest = 0;
		double closingAmount = previousAmount;
		for (int month = 0; month < 12; month++) {
			double monthlyInterest = MonthlyInterest(closingAmount, monthlyDeposit, interest);
			closingAmount += monthlyDeposit + monthlyInterest;
			yearlyInterest += monthlyInterest;
		}
		PrintTable(year, closingAmount, yearlyInterest);
		previousAmount = closingAmount;
	}
}
