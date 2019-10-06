/*
Name: Giseok Choi
Student Number: 110456183
Email: gchoi13@myseneca.ca or edgar.choi.13@gmail.com
Date: 2019-10-04
*/
#define _CRT_SECURE_NO_WARNINGS	// This means that we are going to ingnore warnings
#include <stdio.h>

int main(void)
{
	double amountToBePaid;	// This menas literally amount that i have to pay
	double GST;
	printf("Please enter the amount to be paid: $");
	scanf_s("%lf", &amountToBePaid);	// i used scanf_s instead of scanf; but, there are more ways to use scanf

	// Calculate GST;
	GST = amountToBePaid * 0.13 + 0.005;
	printf("GST: %0.2lf", GST);
	// Calculate Balance owing with GST
	double balanceOwing = amountToBePaid + GST;

	printf("\nBalance owing: $%0.2lf", balanceOwing);
	// calculate required loony
	int loonyRequired = (int)(balanceOwing / 1);	// by using casting, i make double into int type
	int balanceOwing1a = (int)(balanceOwing * 100) % (loonyRequired * 100); // this is for calculating rest part of balance
	double balanceOwing1 = (double)balanceOwing1a / 100;
	printf("\nLoonies required: %d, balance owing $%1.2lf", loonyRequired, balanceOwing1);

	// calculate quarters required
	int quartersRequired = (int)((100 * balanceOwing1) / (0.25 * 100));
	double balanceOwing2a = (int)(100 * balanceOwing1) % (int)(0.25 * 100); // this is for calculating rest part of balance
	double balanceOwing2 = (double)balanceOwing2a / 100;
	printf("\nQuarters required: %d, balance owing $%1.2lf", quartersRequired, balanceOwing2);

	// calculate Dimes required
	int dimesRequired = (int)((100 * balanceOwing2) / (0.10 * 100));
	double balanceOwing3a = (int)(100 * balanceOwing2) % (int)(0.10 * 100); // this is for calculating rest part of balance
	double balanceOwing3 = (double)balanceOwing3a / 100;
	printf("\nDimes required: %d, balance owing $%1.2lf", dimesRequired, balanceOwing3);

	// calculate nickels required
	int nickelsRequired = (int)((100 * balanceOwing3) / (0.05 * 100));
	double balanceOwing4a = (int)(100 * balanceOwing3) % (int)(0.05 * 100); // this is for calculating rest part of balance
	double balanceOwing4 = (double)balanceOwing4a / 100;
	printf("\nNickels required: %d, balance owing $%1.2lf", nickelsRequired, balanceOwing4);

	// calculate pennies required
	int penniesRequired = (int)((100 * balanceOwing4) / (0.01 * 100));
	double balanceOwing5a = (int)(100 * balanceOwing4) % (int)(0.01 * 100); // this is for calculating rest part of balance
	double balanceOwing5 = (double)balanceOwing5a / 100;
	printf("\nPennies required: %d, balance owing $%1.2lf", penniesRequired, balanceOwing5);

}