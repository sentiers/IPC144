/* -------------------------------------------
Name: Hyunji Cho
Student number: 128065182
Email: hcho51@myseneca.ca
Section: SII
Date: 2019-03-10
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:

#include "contacts.h"

int main(void)
{
	// Declare variables here:

	char yes;

	struct Name name = { "\0","\0","\0" };
	struct Name *name2;
	name2 = &name;

	struct Address address = { 0,"\0",0,"\0","\0" };
	struct Address *address2;
	address2 = &address;

	struct Numbers numbers = { "\0","\0","\0" };
	struct Numbers *numbers2;
	numbers2 = &numbers;

	// Display the title

	printf("Contact Management System\n-------------------------\n");

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%s", name2->firstName);



	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yes);


	if (yes == 'y' || yes == 'Y') {

		printf("Please enter the contact's middle initial(s): ");
		scanf(" %[^\n]s", name2->middleInitial);
	}


	printf("Please enter the contact's last name: ");
	scanf(" %[^\n]s", name2->lastName);



	// Contact Address Input:
	printf("Please enter the contact's street number: ");
	scanf("%d", &address2->streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]s", address2->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yes);


	if (yes == 'y' || yes == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &address2->apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]s", address2->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %[^\n]s", address2->city);



	// Contact Numbers Input:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yes);

	if (yes == 'y' || yes == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%s", numbers2->cell);

	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yes);

	if (yes == 'y' || yes == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%s", numbers2->home);

	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yes);
	if (yes == 'y' || yes == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%s", numbers2->business);

	}


	// Display Contact Summary Details

	printf("\nContact Details\n---------------\n");
	printf("Name Details\n");
	printf("First name: %s\n", name2->firstName);
	printf("Middle initial(s): %s\n", name2->middleInitial);
	printf("Last name: %s\n", name2->lastName);
	printf("\nAddress Details\n");
	printf("Street number: %d\n", address2->streetNumber);
	printf("Street name: %s\n", address2->street);
	printf("Apartment: %d\n", address2->apartmentNumber);
	printf("Postal code: %s\n", address2->postalCode);
	printf("City: %s\n", address2->city);
	printf("\nPhone Numbers:\n");
	printf("Cell phone number: %s\n", numbers2->cell);
	printf("Home phone number: %s\n", numbers2->home);
	printf("Business phone number: %s\n", numbers2->business);

	// Display Completion Message

	printf("\nStructure test for Name, Address, and Numbers Done!\n");

	return 0;
}

/*  SAMPLE OUTPUT:

	Contact Management System
	-------------------------
	Please enter the contact's first name: Tom
	Do you want to enter a middle initial(s)? (y or n): y
	Please enter the contact's middle initial(s): L. A.
	Please enter the contact's last name: Wong Song
	Please enter the contact's street number: 20
	Please enter the contact's street name: Keele Street
	Do you want to enter an apartment number? (y or n): y
	Please enter the contact's apartment number: 40
	Please enter the contact's postal code: A8A 4J4
	Please enter the contact's city: North York
	Do you want to enter a cell phone number? (y or n): Y
	Please enter the contact's cell phone number: 9051116666
	Do you want to enter a home phone number? (y or n): Y
	Please enter the contact's home phone number: 7052227777
	Do you want to enter a business phone number? (y or n): Y
	Please enter the contact's business phone number: 4163338888

	Contact Details
	---------------
	Name Details
	First name: Tom
	Middle initial(s): L. A.
	Last name: Wong Song

	Address Details
	Street number: 20
	Street name: Keele Street
	Apartment: 40
	Postal code: A8A 4J4
	City: North York

	Phone Numbers:
	Cell phone number: 9051116666
	Home phone number: 7052227777
	Business phone number: 4163338888

	Structure test for Name, Address, and Numbers Done!
*/