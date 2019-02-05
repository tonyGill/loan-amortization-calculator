/*


Algorithm was designed in the following series of steps:
1) Define and initialize variables to be used in the payment formula
2) Ask the user to input amount of loan
3) Ask the user to input the rate of interest
5) Ask the user to input the number of payments
6) Define formulas to calculate loan monthly payment, amount paid back and interest paid
7) Output user input for loan amount, interest rate and monthly payments
8) Output calculations for monthly payment, amount paid back and interest paid

Functions/Formulas:
This ensures interest rate is intrepreted in percent format
interestRate = interestRate / 100;

This is the predefined payment formula from the question 
monthlyPayment = (interestRate * (pow(1 + interestRate, numPayments) / (pow(1 + interestRate, numPayments) - 1))) * loanAmount;

This repesents the formula to calculate amount to pay back
paidBackAmount = monthlyPayment * 36;

This formula calculates the interest paid which uses the paidBackAmount formula and loanAmount entered by user
interestPaid = paidBackAmount - loanAmount;


Function in this case was only the main function with all data, formulas and output


Revision History:
January 30, 2019: First working edition created, revised and completed


*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// Defines all variables used as double type
	double interestRate, numPayments, loanAmount, monthlyPayment, paidBackAmount, interestPaid;

	// Asks the user to enter loan amount 
	cout << "What is the amount of the loan? " << endl;

	//Receive loan amount input from user
	cin >> loanAmount;

	// Asks the user to enter interest rate  
	cout << "What is the interest rate? " << endl;

	//Receive interest rate input from user
	cin >> interestRate;

	// Asks user to enter the number of payments
	cout << "Number of payments required?" << endl;

	//Receive number of payments input from user
	cin >> numPayments;

	// Converts interest rate from decimal to percentage
	interestRate = interestRate / 100;

	// The payment formula as predefined in the question
	monthlyPayment = (interestRate * (pow(1 + interestRate, numPayments) / (pow(1 + interestRate, numPayments) - 1))) * loanAmount;

	// The amount paid back formula
	paidBackAmount = monthlyPayment * 36;

	// The interest paid formula
	interestPaid = paidBackAmount - loanAmount;

	// Outputs the loan amount entered by user
	cout << "Loan Amount: $ " << loanAmount << endl;

	// Ouputs the monthly interest rate enter by user
	cout << "Monthly Interest Rate: " << interestRate * 100 << "%" << endl;

	// Outputs the number of payments entered by user
	cout << "The Number of Payments " << numPayments << endl;

	// Calculates and outputs the monthly payment amount of loan
	cout << "The monthly payment amount is : $" << monthlyPayment << endl;

	// Calculate and output the amount paid back
	cout << "The amount paid back is : $" << paidBackAmount << endl;

	// Calculate and output the interest paid
	cout << "The amount of interest paid is : $" << interestPaid << endl;



	return 0;
}