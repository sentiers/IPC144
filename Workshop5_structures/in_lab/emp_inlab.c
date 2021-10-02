//--------------------------------------------------
// Name:           Hyunji Cho
// Student Number: 128065182
// Email:          hcho51@myseneca.ca
// Section:        SII
// Workshop:       5 (in-lab)
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2

// Define Number of Employees "SIZE" to be 2
// Declare Struct Employee 

struct Employee {
	int ID;
	int Age;
	double Salary;
};

/* main program */
int main(void) {

	int option = 0;
	int count_employee = 0;

	struct Employee emp[SIZE] = { {0} };
	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero

	printf("---=== EMPLOYEE DATA ===---\n");

	do {
		// Print the option list
		printf("\n1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		// Capture input to option variable
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:	// Exit the program

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (count_employee = 0; count_employee < SIZE; count_employee++) {
				printf("%6d%9d%11.2lf\n", emp[count_employee].ID, emp[count_employee].Age, emp[count_employee].Salary);
			}

			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 

			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;

		case 2:	// Adding Employee
				// @IN-LAB

			printf("Adding Employee\n");
			printf("===============\n");

			if (count_employee < SIZE) {

				printf("Enter Employee ID: ");
				scanf("%d", &emp[count_employee].ID);

				printf("Enter Employee Age: ");
				scanf("%d", &emp[count_employee].Age);

				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[count_employee].Salary);

				count_employee++;
			}
			else
				printf("ERROR!!! Maximum Number of Employees Reached\n");
	
			// Check for limits on the array and add employee 
			// data accordingly. 

			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);

	printf("Exiting Employee Data Program. Good Bye!!!\n");

	return 0;
}

//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
