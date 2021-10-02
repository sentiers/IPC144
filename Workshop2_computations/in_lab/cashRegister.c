//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       2 (in lab)
//--------------------------------------------------


#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include <stdio.h>

int main(void)
{
	double amount = 0.00;
	int loonies;
	int quarters;
	double balancex;
	double balancey;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);


	loonies = amount / 1;
	balancex = amount - loonies;


	printf("Loonies required: %d, balance owing $%.2lf\n", loonies, balancex);


	quarters = balancex * 100 / 25;
	balancey = balancex - quarters * 0.25;


	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, balancey);


	return 0;
}