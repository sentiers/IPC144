//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       3 (in lab)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 3
#include <stdio.h>

int main(void)
{
	int high, low, i;
	int max = 40;
	int min = -40;

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
	}
	return 0;
}