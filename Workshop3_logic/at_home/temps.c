//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       3 (at home)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4
#include <stdio.h>

int main(void)
{
	double average;
	int high, low, i, highday, lowday;
	int sumhigh = 0;
	int sumlow = 0;
	int max = 40;
	int min = -40;
	int highest = -40;
	int lowest = 40;

	printf("---=== IPC Temperature Analyzer ===---");

	for (i = 1; i <= NUMS; i++) 
	{
		printf("\nEnter the high value for day %d: ", i);
		scanf("%d", &high);

		printf("\nEnter the low value for day %d: ", i);
		scanf("%d", &low);

		while (high > max || low < min || high < low) {

			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");

			printf("\nEnter the high value for day %d: ", i);
			scanf("%d", &high);

			printf("\nEnter the low value for day %d: ", i);
			scanf("%d", &low);
		}

		sumhigh += high;
		sumlow += low;
		average = (sumhigh + sumlow) / (NUMS * 2);

		if (high > highest) {
			highest = high;
			highday = i;
		}
		if (low < lowest) {
			lowest = low;
			lowday = i;
		}
	}

	printf("\nThe average (mean) LOW temperature was: %.2f\n", (float)sumlow / NUMS);
	printf("The average (mean) HIGH temperature was: %.2f\n", (float)sumhigh / NUMS);
	printf("The average (mean) temperature was: %.2lf\n", average);
	printf("The highest temperature was %d, on day %d\n", highest, highday);
	printf("The lowest temperature was %d, on day %d\n", lowest, lowday);

	return 0;
}