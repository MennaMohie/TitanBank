# TitanBank
A bank management system using C++/Windows Forms

This is an application that helps a bank manager manage customer accounts.
The bank offers several bank accounts types.
Each customer can have one or more accounts.
The customer can go the operations permitted by the account type, such as deposit, withdraw, or balance enquires.
The bank manages the account by debiting the fees or crediting the profits.
Both the bank employees and the customers can print reports about the current account details. 

Basic Classes: Account, CheckingAccount, SavingAccount, Loan, Customer, Admin 
1. The Account is a general account class that contains balance as instance variable, deposit,withdraw, and balanceEnquiry as instance methods. 
2. CheckingAccount is a subclass from the Account class that allows overdraft while withdrawing (making the balance go below zero up to the specified credit limit), by debiting the account balance with an overdraft fee. It has a credit limit as an instance variable. 
3. The Saving Account is a subclass from the Account class that has an interest rate as an instance variable. The system credit the balance with monthly interest based on the account balance and the interest rate. 
4. The loan account is a subclass from the Account class that has principal amount, interest rate, loan duration in months as instance variables. The loan balance is debited by monthly interest each month based on the interest rate and the loan balance. 
5. Each customer can have any number of accounts of any type. 
6. The banking system provide the customer with an interface to access all banking operations described above and review reports about transactions and current balance. 
7. A banking administrator can print a report about all customers and their current balances. 
