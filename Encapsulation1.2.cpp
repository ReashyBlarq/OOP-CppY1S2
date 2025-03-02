//C++
/*
Encapsulation 1.2
Author: Blarq
Reg No: BSCIT-01-0173/2024
copyright @Blarq
*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
	private :
		string accountholder;
		double balance;
		
		public :
			void setAccountholder(string name)
			{
				accountholder = name;
			}
			void setBalance(double bal)
			{
				balance = bal;
			}
			string getAccountholder()
			{
				return accountholder;
			}
			double getBalance()
			{
				return balance;
			}
};
int main()
{
	BankAccount acc1;
	acc1.setAccountholder("Reagan Blarq");
	acc1.setBalance(15400);
	
	cout<<"...Account Details..."<<endl;
	cout<<"\nName : "<<acc1.getAccountholder()<<endl;
	cout<<"Balance : "<<acc1.getBalance()<<endl;
	return 0;
}