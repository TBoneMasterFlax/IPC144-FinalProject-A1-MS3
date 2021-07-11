/*
    ==================================================
    Assignment #1 Milestone #3:
    ==================================================
    Name   : Tuan Nguyen
    ID     : 109062166
    Email  : tnguyen140@myseneca.ca
    Section: NFF
*/

#ifndef COMMONHELPERS_H_
#define COMMONHELPERS_H_

// -----------------------------------------
// Function Prototypes
int currentYear(void);
void clearStandardInputBuffer(void);
int getInteger();
int getPositiveInteger();
double getDouble();
double getPositiveDouble();
double getPositiveDouble2();
int getIntFromRange(int lowerBound, int upperBound);
char getCharOption(char string[]);
void getCString(char* string, int lowerBound, int upperBound);

#endif