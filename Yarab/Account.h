#pragma once
#include <string>
using namespace std;

class Account
{
public:
	string accountID;
	double balance;
	string creationDate;
	Account();
	virtual void deposit(double) {}
	virtual bool withdraw(double) { return true; }
	virtual double balanceEnquiry() = 0;
	~Account();
};

