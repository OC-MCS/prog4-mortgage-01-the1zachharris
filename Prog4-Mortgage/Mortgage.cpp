// implementation file for Mortgage class
#include "Mortgage.h"
#include <cmath>


// constructor that initializes all the varables
mortgage::mortgage()
{
	loan = 0;
	rate = 0;
	years = 0;
}

// function that calculates and returns the monthly payment based on the inputs
double mortgage::getPayment()
{
	double term = pow((1 + (rate / 12)), 12 * years);
	return ((loan*(rate / 12)*term) / (term - 1));
}

// function that calculates and returns the total payment after all the years
double mortgage::getTotal()
{
	return getPayment()*years;
}

// function that returns false if num is postive and true if negative
bool mortgage::checkNegative(double num) {

	bool end = false;

	if (num < 0) {
		end = true;
	}

	return end;
}