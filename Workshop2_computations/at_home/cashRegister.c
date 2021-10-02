//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       2 (at home)
//--------------------------------------------------

#include <stdio.h>

int main(void)
{
	double amount = 8.68;
	double GST = 0.0;
	int loonies, quarters, dimes, nickels, pennies, balance;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

	GST = amount * 0.13 + .005;
	amount += GST;

	printf("GST: %.2lf\n", GST);
	printf("Balance owing: $%.2lf\n", amount);

	balance = (int)(amount * 100);

	loonies = balance / 100;
	balance = balance % 100;
	printf("Loonies required: %d, balance owing $%1.2f\n", loonies, (float)balance / 100);

	quarters = balance / 25;
	balance = balance % 25;
	printf("Quarters required: %d, balance owing $%1.2f\n", quarters, (float)balance / 100);

	dimes = balance / 10;
	balance = balance % 10;
	printf("Dimes required: %d, balance owing $%1.2f\n", dimes, (float)balance / 100);

	nickels = balance / 5;
	balance = balance % 5;
	printf("Nickels required: %d, balance owing $%1.2f\n", nickels, (float)balance / 100);

	pennies = balance / 1;
	balance = balance % 1;
	printf("Pennies required: %d, balance owing $%1.2f\n", pennies, (float)balance / 100);

	return 0;
}