/* -------------------------------
Name: Hyunji Cho
Student number: 128065182
Email: hcho51@myseneca.ca
Section: SII
Date: 2019-03-10
----------------------------------
Assignment: 1
Milestone:  2
---------------------------------- */

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};