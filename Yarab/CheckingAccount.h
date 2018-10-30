#pragma once
#include <string.h>
#include <string>
#include <list>
#include "Account.h"
using namespace std;

class CheckingAccount :
	public Account
{

public:
	double instance;
	double lim;
	double rate;

	CheckingAccount(double);
	bool withdraw(double) override;
	void deposit(double) override;
	double balanceEnquiry() override;
	CheckingAccount();

	~CheckingAccount() {}
};