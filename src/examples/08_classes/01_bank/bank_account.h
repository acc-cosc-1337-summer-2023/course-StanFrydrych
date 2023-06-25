//bank_account.h
#include<iostream>

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
    public:
        BankAccount()
        {
            std::cout<<"using default constructor\n";
        }
        BankAccount(int b):balance(b)
        {
            std::cout<<"Using parameterized constructor\n";
        }
        int get_balance() const
        {
            return balance;
        }
        void deposit(int amount);
        void withdraw(int amount);
        
        private:
        int balance{0};

};

#endif