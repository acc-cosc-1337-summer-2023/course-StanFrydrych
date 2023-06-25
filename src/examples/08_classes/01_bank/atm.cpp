//atm.cpp
#include "atm.h"

using std::cin; using std::cin;

void display_menu()
{
    cout<<"ACC Bank\n\n";
    cout<<"1-Display Balance\n";
    cout<<"2-Deposit\n";
    cout<<"3-Withdraw\n";
}

void run_menu(std::vector<BankAccount*)
{
    auto choice = 0;

    do
    {
        display_menu();
        cout<<"Enter choice: ";
        cin>>choice;
        handle_option(account, choice);

    } while (choice !=4);
    
}

void handle_option(BankAccount& account, int option)
{
    auto amount =0;
    switch(option)
    {
    case 1:
        cout<<"Balance: "<< account.get_balance()<<"\n";
        break;

    case 2:
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    account.deposit(amount);
    break;
    
    case 3:
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    account.withdraw(amount);
    break;

    case 4:
    cout<<"Program wil exit...\n";
    break;
    }
}