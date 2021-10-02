/* -------------------------------
Name: Hyunji Cho
Student number: 128065182
Email: hcho51@myseneca.ca
Section: SII
Date: 2019-03-31
----------------------------------
Assignment: 2
Milestone:  4
---------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:
void getName(struct Name *name) {

	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]s", name->firstName);
	clearKeyboard();

	printf("Do you want to enter a middle initial(s)? (y or n): ");

	if (yes()) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]s", name->middleInitial);
		clearKeyboard();
	}
	else
	{
		name->middleInitial[0] = '\0';
	}

	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]s", name->lastName);
	clearKeyboard();
}



// getAddress:
void getAddress(struct Address *address) {
	int stNum;
	int apNum;

	printf("Please enter the contact's street number: ");

	do {
		stNum = getInt();

		if (stNum < 0) {
			printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		}
	} while (stNum < 0);

	address->streetNumber = stNum;

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]s", address->street);
	clearKeyboard();

	printf("Do you want to enter an apartment number? (y or n): ");

	if (yes()) {

		printf("Please enter the contact's apartment number: ");

		do {
			apNum = getInt();

			if (apNum < 0) {
				printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			}
		} while (apNum < 0);

		address->apartmentNumber = apNum;
	}
	else
	{
		address->apartmentNumber = '\0';
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]s", address->postalCode);
	clearKeyboard();

	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]s", address->city);
	clearKeyboard();
}



// getNumbers:
void getNumbers(struct Numbers *numbers) {

	printf("Please enter the contact's cell phone number: ");
	getTenDigitPhone(numbers->cell);

	printf("Do you want to enter a home phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's home phone number: ");
		getTenDigitPhone(numbers->home);
	}
	else
	{
		numbers->home[0] = '\0';
	}

	printf("Do you want to enter a business phone number? (y or n): ");

	if (yes())
	{
		printf("Please enter the contact's business phone number: ");
		getTenDigitPhone(numbers->business);
	}
	else
	{
		numbers->business[0] = '\0';
	}
}



// getContact:
void getContact(struct Contact *contact) {
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
}