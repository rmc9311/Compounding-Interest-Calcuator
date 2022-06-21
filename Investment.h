#include <iostream>

using namespace std;

class Investment {
	public:
		double MonthlyInterest(double initialAmount, double monthlyDeposit, double annualInterest);
		void YearlyAmount(double interest, double initialAmount, double monthlyDeposit, int years);
		void PrintTable(int years, double yearEndBalance, double yearEndinterestAmount);
};