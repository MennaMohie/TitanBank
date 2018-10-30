#pragma once
#include "User.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "LoanAccount.h"
#include "SavingAccount.h"
#include "Operation.h"
#include "admin.h"

#include<map>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <msclr\marshal_cppstd.h>


using namespace std;
using namespace System::IO;
using namespace msclr::interop;

namespace ve
{
	static vector<User>usr;
	static User current_user;
	static string current_id;

	static map<string, CheckingAccount> checkMap;
	static map<string, LoanAccount> loanMap;
	static map<string, SavingAccount> saveMap;

	static string current_acc;
	static map<string, admin>admins;
	static map<string, map<string, Operation>> userOpMap;
	
	static int choose = 0;
}