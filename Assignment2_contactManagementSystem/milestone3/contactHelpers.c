/* -------------------------------
Name: Hyunji Cho
Student number: 128065182
Email: hcho51@myseneca.ca
Section: SII
Date: 2019-03-27
----------------------------------
Assignment: 2
Milestone:  3
---------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>
#include <ctype.h>

// -------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n');
}

// pause:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void)
{
	int Value;
	char NL = 'x';

	while (NL != '\n')
	{
		scanf("%d%c", &Value, &NL);

		if (NL != '\n')
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
	}
	return Value;
}

// getIntInRange:
int getIntInRange(int min, int max)
{
	int Value;

	do
	{
		Value = getInt();

		if (Value<min || Value>max)
		{
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}

	} while (Value<min || Value>max);

	return Value;
}

// yes:
int yes(void)
{
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

// menu:
int menu(void)
{
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

// contactManagerSystem:
void contactManagerSystem(void)
{
	int option;
	int exit = 0;

	do
	{
		option = menu();

		switch (option)
		{
		case 1:
			printf("<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 2:
			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 3:
			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 4:
			printf("<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 5:
			printf("<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		case 6:
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

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char phoneNum[])
{
	int needInput = 1;
	int i;

	while (needInput == 1)
	{
		scanf("%10s", phoneNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(phoneNum) == 10)
		{
			for (i = 0; i < 10; i++)
			{
				if ((isdigit(phoneNum[i])) == 0)
				{
					printf("Enter a 10-digit phone number: ");
					needInput = 1;
					break;
				}
				else needInput = 0;
			}
		}
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
	return -1;
}

// displayContactHeader
void displayContactHeader(void)
{

}

// displayContactFooter
void displayContactFooter(int count)
{

}

// displayContact:
void displayContact(const struct Contact *contact) 
{

}

// displayContacts:
void displayContacts(const struct Contact contacts[], int size) 
{

}

// searchContacts:
void searchContacts(const struct Contact contacts[], int size) 
{

}

// addContact:
void addContact(struct Contact contacts[], int size) 
{

}

// updateContact:
void updateContact(struct Contact contacts[], int size) 
{

}

// deleteContact:
void deleteContact(struct Contact contacts[], int size) 
{

}

// sortContacts:
void sortContacts(struct Contact contacts[], int size) 
{

}