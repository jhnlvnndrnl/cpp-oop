#include <iostream>
using namespace std;

class BankAccount {
private:
    string AccountHolder;
    int AccountNumber;
    double AccountBalance;

public:
    BankAccount(string holder, int number, double balance){
        AccountHolder = holder;
        AccountNumber = number;
        AccountBalance = balance;
    }

    void Deposit(double amount){
        AccountBalance += amount;
    }

    void Withdraw(double amount){
        AccountBalance -= amount;
    }

    void DisplayAccount(){
        cout << "Account: " << AccountNumber << endl;
        cout << "Holder: " << AccountHolder << endl;
        cout << "Balance: " << AccountBalance << endl;
    }
};

int main()
{
    int DepositAmount = 5000;
    int WithdrawAmount = 1000;

    BankAccount johnAccount("John", 101, 1000);
    BankAccount elvinAccount("Elvin", 102, 5000);

    johnAccount.DisplayAccount();
    elvinAccount.DisplayAccount();

    cout << "-- After transactions --" << endl;
    cout << "Deposited " << DepositAmount << " to John's account" << endl;
    cout << "Withdrew " << WithdrawAmount << " from Elvin's account" << endl;

    johnAccount.Deposit(DepositAmount);
    elvinAccount.Withdraw(WithdrawAmount);
    
    johnAccount.DisplayAccount();
    elvinAccount.DisplayAccount();
}