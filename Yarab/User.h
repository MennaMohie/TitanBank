#pragma once
#include <string>
#include <vector>
#include "CheckingAccount.h"
#include  "SavingAccount.h"
#include "LoanAccount.h"
#include "person.h"
using namespace std;
class User :
	public person

{
public:
	User();
	string id;
	string userName;
	string password;
	vector<string> Checklist;
	vector<string> Loanlist;
	vector<string> Saveist;

public:

};

