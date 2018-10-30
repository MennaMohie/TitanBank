#pragma once
#include "Account.h"
class LoanAccount :
	public Account
{
public:
	double principalAmount;
	float interestRate;
	int loanDuration;
	LoanAccount() {}
	LoanAccount(double, int);
	void deposit(double) override;
	double balanceEnquiry() override;

	void setPrincipal(double);
	void setRate(float);
	void setDuration(int);

	double getPrincipal() { return principalAmount; }
	float getRate() { return interestRate; }
	int getDuration() { return loanDuration; }
	void decrease(string);
	~LoanAccount() {}
};

