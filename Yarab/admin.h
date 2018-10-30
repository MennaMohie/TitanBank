#pragma once
#include <string>
#include <vector>
#include "CheckingAccount.h"
#include  "SavingAccount.h"
#include "LoanAccount.h"
#include "person.h"
using namespace std;
class admin:public person
{
public:
	string id;
	string userName;
	string password;
	admin();
	~admin();
};

