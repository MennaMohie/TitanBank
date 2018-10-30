#include "SavingAccount.h"

SavingAccount::SavingAccount()
{
	balance = 0;
	rate = 0.1;
}

SavingAccount::SavingAccount(double blance, string id, string date)
{
	accountID = id;
	creationDate = date;
	balance = blance;
	rate = 0.1;
}

void SavingAccount::deposit(double z)
{
	balance += z;
}

bool SavingAccount::withdraw(double z)
{
	if (balance >= z)
	{
		balance -= z;
		return true;
	}
	else return false;
}

void SavingAccount::increase(string cdate)
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
	if ((((ye2 - ye1) * 12) + z) - x >= 1 && w - y >= 0)
	{
		balance += rate*balance;
		creationDate = "";
		creationDate = month + "/" + day + "/"+ year;
	}


}