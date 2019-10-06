/*
Name: Giseok Choi
Student Number: 110456183
Email: gchoi13@myseneca.ca or edgar.choi.13@gmail.com
Date: 2019-10-04
*/
#define _CRT_SECURE_NO_WARNINGS	// This means that we are going to ingnore warnings
#include <stdio.h>

int main(void) {
	double amountToBePaid;	// This menas literally amount that i have to pay
	printf("Please enter the amount to be paid: $");
	scanf_s("%lf", &amountToBePaid);	// i used scanf_s instead of scanf; but, there are more ways to use scanf
	int loonyRequired = (int)amountToBePaid;	// by using casting, i make double into int type
	double balanceOwing = amountToBePaid - loonyRequired; // this is for calculating rest part of balance
	printf("Loonies required: %d, balance owing $%0.2lf",loonyRequired, balanceOwing);
	int quartersRequired;
	quartersRequired = (int)(balanceOwing / 0.25);
	double balanceOwing2 = balanceOwing - (quartersRequired * 0.25);
	printf("\nQuarters required: %d, balance owing $%0.2lf", quartersRequired, balanceOwing2);
	
	return 0;
}