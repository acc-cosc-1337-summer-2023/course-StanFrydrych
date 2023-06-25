#include "atm.h"
#include "bank_account.h"
#include<iostream>

using std::cin;
using std::cout;
using std::vector;

int main()
{
	std::vector<BankAccount*> accounts;

	CheckingAccout checking(100);
	accounts.push_back(&savings);

	run_menu(accounts);

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";
	
	return 0;
}