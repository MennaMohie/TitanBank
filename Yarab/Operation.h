#pragma once
#include<string>
using namespace std;

class Operation
{
	string ID;
	string userID;
	string type;
	double balanceWithdrawnOrDeposited;
	string accID;
	string date;

public:
	Operation() {}
	Operation(string, string, string, double, string, string);
	~Operation() {}

	void setOpID(string);
	void setOpType(string);
	void setOpDate(string);
	void setUserID(string);
	void setAccID(string);
	void setBalanceWithdrawnOrDeposited(double);
	string getOpID();
	string getOpType();
	string getOpDate();
	string getUserID();
	string getAccID();
	double getBalanceWithdrawnOrDeposited();
};

