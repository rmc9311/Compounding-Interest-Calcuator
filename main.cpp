#include <iostream>
#include <string>
#include <iomanip>
#include "Investment.h"
using namespace std;

/* Calculate compounding interest based on user input*/
int main() {
	double initialAmount;
	double monthlyDeposit;
	double annualInterest;
	int years;

	cout << "Investment Input" << endl;
	cout << "Initial Investment Amount: ";
	cin >> initialAmount;
	cout << "Monthly Deposit: ";
	cin >> monthlyDeposit; 
	cout << "Annual Interest: ";
	cin >> annualInterest;
	cout << "Number of Years: ";
	cin >> years;
	system("pause");

	Investment userInvestment;
	userInvestment.YearlyAmount(annualInterest, initialAmount, 0, years);
	userInvestment.YearlyAmount(annualInterest, initialAmount, monthlyDeposit, years);

	return 0;
}

