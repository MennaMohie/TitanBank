#include "Operation.h"

Operation::Operation(string oID, string uID, string t, double b, string aID, string d)
{
	ID = oID;
	userID = uID;
	type = t;
	balanceWithdrawnOrDeposited = b;
	accID = aID;
	date = d;
}

void Operation::setOpID(string id)
{
	ID = id;
}

void Operation::setOpType(string s)
{
	type = s;
}

void Operation::setOpDate(string d)
{
	date = d;
}

void Operation::setUserID(string id)
{
	userID = id;
}

void Operation::setAccID(string id)
{
	accID = id;
}

void Operation::setBalanceWithdrawnOrDeposited(double b)
{
	balanceWithdrawnOrDeposited = b;
}

string Operation::getOpID()
{
	return ID;
}

string Operation::getOpType()
{
	return type;
}

string Operation::getOpDate()
{
	return date;
}

string Operation::getUserID()
{
	return userID;
}

string Operation::getAccID()
{
	return accID;
}

double Operation::getBalanceWithdrawnOrDeposited()
{
	return balanceWithdrawnOrDeposited;
}

