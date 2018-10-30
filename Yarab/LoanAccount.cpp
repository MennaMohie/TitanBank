#include"LoanAccount.h"

LoanAccount::LoanAccount(double principal, int duration) :principalAmount(principal), loanDuration(duration)
{
	balance = 0;
	interestRate = 0.13;
}

void LoanAccount::setPrincipal(double p)
{
	principalAmount = p;
}

void LoanAccount::setRate(float r)
{
	interestRate = r;
}

void LoanAccount::setDuration(int d)
{
	loanDuration = d;
}


void LoanAccount::deposit(double moneyAdded)
{
	balance += moneyAdded;
	

}

double LoanAccount::balanceEnquiry()
{
	return balance;
}
void LoanAccount::decrease(string cdate)
{
	string month, day, year;
	bool f = false;
	for (int i = 0; i < creationDate.size(); i++)
	{
		if (creationDate[i] == '/'&&f) {
			year += creationDate[i + 1];
			year += creationDate[i + 2];year += creationDate[i + 3];
			year += creationDate[i + 4];break;
		}
		else if (creationDate[i] == '/') { f = true; continue; }
		if (f == 0)
		{
			month += creationDate[i];
		}
		if (f == 1)
		{
			day += creationDate[i];
		}
	}
	int x = stol(month);
	int y = stol(day);
	int ye1 = stol (year);
	month = "";
	day = "";
	year = "";
	f = false;
	for (int i = 0; i < cdate.size(); i++)
	{
		if (cdate[i] == '/'&&f) {
			year += cdate[i + 1];
			year += cdate[i + 2];year += cdate[i + 3];
			year += cdate[i + 4];break;
		}
		else if (cdate[i] == '/') { f = true; continue; }
		if (f == 0)
		{
			day += cdate[i];
		}
		if (f == 1)
		{
			month += cdate[i];
		}

	}
	int z = stol(month);
	int w = stol(day);
	int ye2 = stol(year);
	if ((((ye2 - ye1) * 12) + z) - x >= loanDuration && w - y >= 0)
	{
		principalAmount += interestRate*(principalAmount - balance);
		creationDate = "";
		creationDate += to_string((x + 1) % 12) + "/" + to_string(y) + "/" + to_string(ye1 + (x + 1) / 12);

	}


}