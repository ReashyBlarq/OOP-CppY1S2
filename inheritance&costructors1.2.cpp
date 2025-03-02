//C++
/*
Inheritance
Author: Blarq
Reg No: BSCIT-01-0173/2024
copyright @Blarq
*/
#include <iostream>
#include <string>
using namespace std;

class AccountHolder 
{
protected:
    string name;

public:
    void setName(string n) 
	{
        name = n;
    }
    string getName() 
	{
        return name;
    }
};

class BankAccount : public AccountHolder 
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int a, double b) 
	{
        setName(n);
        accountNumber = a;
        balance = b;
    }
    
    int getAccountNumber() 
	{
        return accountNumber;
    }
    
    double getBalance() 
	{
        return balance;
    }
};

class SavingsAccount : public BankAccount 
{
private:
    double interestRate;

public:
    SavingsAccount(string n, int a, double b, double i)
        : BankAccount(n, a, b), interestRate(i) {}//base member initialization

    double getInterestRate() 
	{
        return interestRate;
    }
};

int main() 
{
    BankAccount b1("Blarq", 489800182, 1500.75);
    cout << "Account Number: " << b1.getAccountNumber() << endl;
    cout << "Balance: ksh" << b1.getBalance() << endl;

    SavingsAccount s1("James", 234567890, 5000.50, 2.5);
    cout << "Savings Account Name: " << s1.getName() << endl;
    cout << "Interest Rate: " << s1.getInterestRate() << "%" << endl;

    return 0;
}