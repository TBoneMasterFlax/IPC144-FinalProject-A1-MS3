/*
    ==================================================
    Assignment #1 Milestone #3:
    ==================================================
    Name   : Tuan Nguyen
    ID     : 109062166
    Email  : tnguyen140@myseneca.ca
    Section: NFF
*/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

struct Demographic
{
    int birth_year;
    double income;
    char country[31];
};

struct UserLogin
{
    char display_name[31];
    char login_name[11];
    char password[9];
};

struct Account
{
    int account_number;
    char account_type;
    struct UserLogin user_login;
    struct Demographic demographic;
};

void getAccount(struct Account* account);
void getUserLogin(struct UserLogin* login);
void getDemographic(struct Demographic* demographic);

#endif