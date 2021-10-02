/* -------------------------------
Name: Hyunji Cho
Student number: 128065182
Email: hcho51@myseneca.ca
Section: SII
Date: 2019-03-24
----------------------------------
Assignment: 2
Milestone:  2
---------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:

#include "contactHelpers.h"


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}


// pause function definition goes here:
void pause(void) {

	printf("(Press Enter to Continue)");
	clearKeyboard();
}


// getInt function definition goes here:
int getInt(void) {


	int Value;
	char NL = 'x';

	while (NL != '\n') {

		scanf("%d%c", &Value, &NL);

		if (NL != '\n') {
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return Value;
}


// getIntInRange function definition goes here:
int getIntInRange(int min, int max) {

	int Value;
	do {
		Value = getInt();

		if (Value<min || Value>max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}

	} while (Value<min || Value>max);

	return Value;
}


// yes function definition goes here:
int yes(void) {

	char NL = 'x';
	char yesno;
	int answer = 0;
	int result = 0;

	do
	{
		scanf("%c%c", &yesno, &NL);
		if (NL != '\n')
		{
			clearKeyboard();
			answer = 0;
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		}
		else
		{
			switch (yesno)
			{
			case 'Y':
			case 'y':
				result = 1;
				answer = 1;
				break;
			case 'N':
			case 'n':
				answer = 1;
				break;
			default:
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
				answer = 0;
			}
		}
	} while (NL != '\n' || answer != 1);

	return result;
}


// menu function definition goes here:
int menu(void) {
	int option;

	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\n");
	printf("Select an option:> ");

	option = getIntInRange(0, 6);
	return option;
}



// contactManagerSystem function definition goes here:
void contactManagerSystem(void) {

	int option;
	int exit = 0;

	do
	{
		option = menu();

		switch (option)
		{
		case 1:
			printf("\n");
			printf("<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 2:
			printf("\n");
			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 3:
			printf("\n");
			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 4:
			printf("\n");
			printf("<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 5:
			printf("\n");
			printf("<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 6:
			printf("\n");
			printf("<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			exit = yes();
			printf("\n");
			break;

		default:
			break;
		}
	} while (exit != 1);

	printf("Contact Management System: terminated\n");
}

