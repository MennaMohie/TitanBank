#include "CheckingAccount.h"

CheckingAccount::CheckingAccount()
{
	instance = 5000;
	lim = 5000;
	rate = .12;
}

CheckingAccount::CheckingAccount(double num1)
{
	balance = num1;
	rate = 0.12;
}

bool CheckingAccount::withdraw(double num)
{
	if (balance > num)
	{
		balance -= num;
		return true;
	}
	else if (num == balance)
	{
		balance = 0;
		return true;
	}
	else if (num >balance)
	{
		double x = (num - balance)+((num - balance)*rate);
		if (x<=instance)
		{
			balance = 0;
			instance -= x;
			return true;
		}
		else { return false; }
	}
	else { return false; }
}

void CheckingAccount::deposit(double num)
{
	if (balance > 0||instance ==lim)
	{
		balance += num;
	}
	else if (balance == 0)
	{
		if ((instance + num) > lim)
		{
			balance = (instance + num) - lim;
			instance = lim;
		}
		else
		{
			instance += num;

		}
	}

}

double CheckingAccount::balanceEnquiry()
{
	return balance;
}