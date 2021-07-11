/*
    ==================================================
    Assignment #1 Milestone #3:
    ==================================================
    Name   : Tuan Nguyen
    ID     : 109062166
    Email  : tnguyen140@myseneca.ca
    Section: NFF
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "account.h"
#include "commonHelpers.h"

void getAccount(struct Account* account)
{
    // ---------------------------------------------------------
    // Account Data: get user input
    // ---------------------------------------------------------
    printf("Account Data: New Record\n");
    printf("----------------------------------------\n");

    // Add the necessary code to get user input for each Account member:
    printf("Enter the account number: ");
    account->account_number = getInteger();
    printf("Enter the account type (A=Agent | C=Customer): ");
    account->account_type = getCharOption("AC");
    printf("\n");
}

void getUserLogin(struct UserLogin* login)
{
    // ---------------------------------------------------------
    // UserLogin Data: get user input
    // ---------------------------------------------------------
    printf("User Login Data Input\n");
    printf("----------------------------------------\n");

    // Add the necessary code to get user input for each UserLogin member:
    printf("Enter user login (10 chars max): ");
    getCString(login->login_name, 1, 10);
    printf("Enter the display name (30 chars max): ");
    getCString(login->display_name, 1, 30);
    printf("Enter the password (must be 8 chars in length): ");
    getCString(login->password, 8, 8);
    printf("\n");
}

void getDemographic(struct Demographic* demographic)
{
    // ---------------------------------------------------------
    // Demographic Data: get user input
    // ---------------------------------------------------------
    printf("Demographic Data Input\n");
    printf("----------------------------------------\n");

    // Add the necessary code to get user input for each Demographic member:
    // NOTE: You will need to get the CURRENT YEAR to devise the appropriate range
    //       when prompting for the birth year data.  There is a function in the 
    //       commonHelpers library that gives you this!
    printf("Enter birth year (current age must be between 18 and 110): ");
    demographic->birth_year = getIntFromRange(currentYear() - 110, currentYear() - 18);
    printf("Enter the household Income: $");
    demographic->income = getPositiveDouble2();
    printf("Enter the country (30 chars max.): ");
    getCString(demographic->country, 1, 30);
    printf("\n");
}