//=====================================================
// Zach Harris
// due date 2/20/19
// Programming Assignment #4
// Description: mortgage calc
// Known bugs: does not account for word input, it just accounts for negative input
//=====================================================

#include <iostream>
#include "Mortgage.h"
using namespace std;

int main()
{

	mortgage M; // main mortgage class 

	cout << "What is the loan amount given?: ";
	cin >> M.loan;

	while (M.checkNegative(M.loan)) {
		cout << "Invalid amount. What is the loan amount given?: ";
		cin >> M.loan;
	}

	cout << endl;

	cout << "What is the interest rate on the loan?: ";
	cin >> M.rate;

	while (M.checkNegative(M.rate)) {
		cout << "What is the interest rate on the loan?: ";
		cin >> M.rate;
	}

	cout << endl;

	cout << "How many years is the loan period?: ";
	cin >> M.years;

	while (M.checkNegative(M.years)) {
		cout << "Invalid amount. How many years is the loan period?: ";
		cin >> M.years;
	}

	cout << endl;

	cout << "Monthly payment amount: $" << M.getPayment() << endl;
	cout << "Total payment after interest: " << "$" << M.getTotal() << endl;

	return 0;
}
