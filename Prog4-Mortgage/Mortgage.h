#pragma once
// header file for Mortgage class

class mortgage
{
public:

	double loan; //  the dollar amount of the loan
	double rate; // the annual interest rate
	double years; // the number of years of the loan

	mortgage();

	bool checkNegative(double);

	double getPayment();
	double getTotal();
};