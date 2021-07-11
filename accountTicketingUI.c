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
#include "accountTicketingUI.h"
#include "account.h"
#include <string.h>
#include <stdlib.h>

void displayAccountSummaryHeader()
{
    printf("Acct# Acct.Type Birth\n");
    printf("----- --------- -----\n");
}

void displayAccountDetailHeader()
{
    printf("Acct# Acct.Type Birth Income      Country    Disp.Name       Login      Password\n");
    printf("----- --------- ----- ----------- ---------- --------------- ---------- --------\n");
}

void displayAccountSummaryRecord(const struct Account* account)
{
    char accountType[] = "CUSTOMER";
    if (account->account_type == 'A')
    {
        strcpy(accountType, "AGENT");
    }
    printf("%05d %-9s %5d\n", account->account_number, accountType, account->demographic.birth_year);
}

void displayAccountDetailRecord(const struct Account* account)
{
    char accountType[] = "CUSTOMER";
    if (account->account_type == 'A')
    {
        strcpy(accountType, "AGENT");
    }
    char hiddenPassword[9];
    strcpy(hiddenPassword, account->user_login.password);
    int passwordLength = strlen(hiddenPassword);
    int i;
    for (i = 0; i < passwordLength; i++)
    {
        if (i % 2 != 0)
        {
            hiddenPassword[i] = '*';
        }
    }
    printf("%05d %-9s %5d $%10.2lf %-10s %-15s %-10s %8s\n", account->account_number, accountType, account->demographic.birth_year, account->demographic.income, account->demographic.country, account->user_login.display_name, account->user_login.login_name, hiddenPassword);
}