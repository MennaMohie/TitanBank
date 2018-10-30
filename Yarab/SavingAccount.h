#pragma once
#include "Account.h"
class SavingAccount :
	public Account
{

public:
	double rate;
	SavingAccount();
	SavingAccount(double, string, string);
	void deposit(double) override;
	bool withdraw(double) override;
	double balanceEnquiry() override { return balance; }
	void increase(string);
	~SavingAccount() {}
};

