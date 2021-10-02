//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       5 (at-home)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

struct Employee {
	int ID;
	int Age;
	double Salary;
};

int main(void) {
	int option = 0;
	int count_employee = 0;
	int finding = 0;
	int found = 0;
	int i = 0;

	struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n");

	do {
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		scanf("%d", &option);
		printf("\n");

		switch (option) {

		case 0:
			break;

		case 1:
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++) {

				if (emp[i].ID != 0) {
					printf("%6d%9d%11.2lf\n", emp[i].ID, emp[i].Age, emp[i].Salary);
				}
			}
			break;

		case 2:

			printf("Adding Employee\n");
			printf("===============\n");

			if (count_employee < SIZE) {
				for (i = 0; i < SIZE; i++) {
					if (emp[i].ID == 0) {
						printf("Enter Employee ID: ");
						scanf("%d", &emp[i].ID);

						printf("Enter Employee Age: ");
						scanf("%d", &emp[i].Age);

						printf("Enter Employee Salary: ");
						scanf("%lf", &emp[i].Salary);

						count_employee++;
						break;
					}
				}
			}

			else
				printf("ERROR!!! Maximum Number of Employees Reached\n");

			break;

		case 3:
			printf("Update Employee Salary\n");
			printf("======================");

			found = 0;

			do {
				printf("\nEnter Employee ID: ");
				scanf("%d", &finding);

				for (i = 0; i < SIZE; i++)
				{
					if (finding == emp[i].ID)
					{
						found = 1;
						break;
					}
				}

				if (found == 1)
				{

					printf("The current salary is %.2lf\n", emp[i].Salary);
					printf("Enter Employee New Salary: ");
					scanf("%lf", &emp[i].Salary);

					break;
				}
				else
				{
					printf("*** ERROR: Employee ID not found! ***");
				}


			} while (found != 1);

			break;

		case 4:
			printf("Remove Employee\n");
			printf("===============");
			found = 0;

			do {
				printf("\nEnter Employee ID: ");
				scanf("%d", &finding);

				for (i = 0; i < SIZE; i++)
				{
					if (finding == emp[i].ID)
					{
						found = 1;
						break;

					}
				}

				if (found == 1)
				{
					printf("Employee %d will be removed\n", finding);
					emp[i].ID = 0;
					count_employee--;
									   
					break;
				}
				else
				{
					printf("*** ERROR: Employee ID not found! ***");
				}


			} while (found != 1);

			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n");
		}
	} while (option != 0);

	printf("Exiting Employee Data Program. Good Bye!!!\n");

	return 0;
}