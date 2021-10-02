//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       4 (in lab)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 10
#include <stdio.h>


int main(void)
{
	int i, day;
	int Hi[NUMS], Low[NUMS];

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
	}

	printf("\nDay  Hi  Low\n");

	for (i = 0; i < day; i++) {
		printf("%d    %d    %d\n", i + 1, Hi[i], Low[i]);
	}

	return 0;
}