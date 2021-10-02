//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       4 (at-home)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>
#define NUMS 10

int main(void)
{
	int i, day, aday = 0;
	float average;
	int Hi[NUMS], Low[NUMS];
	int highest = -40, highday;
	int lowest = 40, lowday;
	float sumtotal;

	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &day);

	while (day < 3 || day>10) {

		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &day);
	}

	printf("\n");

	for (i = 0; i < day; i++) {

		printf("Day %d - High: ", i + 1);
		scanf("%d", &Hi[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &Low[i]);

		if (Hi[i] > highest) {
			highest = Hi[i];
			highday = i + 1;
		}
		if (Low[i] < lowest) {
			lowest = Low[i];
			lowday = i + 1;
		}
	}

	printf("\nDay  Hi  Low\n");

	for (i = 0; i < day; i++) {
		printf("%d    %d    %d\n", i + 1, Hi[i], Low[i]);
	}

	printf("\nThe highest temperature was %d, on day %d\n", highest, highday);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowday);

	do {

		printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", day);
		scanf("%d", &aday);

		if (aday < 0)
			break;

		while (aday > day || aday < 1) {

			printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", day);
			scanf("%d", &aday);
		}

		sumtotal = 0;

		for (i = 0; i < aday; i++) {
			sumtotal += Hi[i] + Low[i];
		}
		average = sumtotal / aday / 2;

		printf("\nThe average temperature up to day %d is: %.2f\n", aday, average);

	} while (aday > 0);

	printf("\nGoodbye!\n");

	return 0;
}