#include "pch.h"
#include "stdafx.h"
#pragma once
#include <string>
#include "LoyaltyScheme.h"

using namespace std;
using namespace System;



ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	CreditCardAccount(long number, double limit);
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	literal String^ name = "Super Platinum Card";
	void RedeemLoyaltyPoints();


private:
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;
	LoyaltyScheme^ scheme; // Handle to a LoyaltyScheme object
};






