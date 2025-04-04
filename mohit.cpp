#include<iostream>
#include<string.h>
using namespace std;

class BankAccount{
    private:
    string accountNumber;
    string accountHolderName;
    double balance;
    public:
    BankAccount(string accountNumber,string accountHolderName,double balance){
        this->accountNumber=accountNumber;
        this->accountHolderName=accountHolderName;
        this->balance=balance;
    }
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposit successfull.New balance :"<<endl;
    }
    void withdraw(double amount){
        if(balance >= amount){
            balance-=amount;
            cout<<"insufficent balance"<<endl;
        }
    }
    void displayDetails(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"AccountHolderName: "<<accountHolderName<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
int main() {
    string accountNumber,accountHolderName;
    double balance;
    cout<<"Enter account number:";
    cin>>accountNumber;
    cout<<"Enter account Holder name:";
    cin.ignore();
    getline(cin,accountHolderName);
    cout<<"Enter initial balance: ";
    cin>>balance;
    BankAccount account(accountNumber,accountHolderName,balance);
    while(true){
        cout<<"Bank Management System"<<endl;
        cout<<"1. DEPOSIT"<<endl;
        cout<<"2. WITHDRAW"<<endl;
        cout<<"3.DISPLAY ACCOUNT DETAILS"<<endl;
        cout<<"4.EXIT"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            double depositamount;
            cout<<"enter deposit amount:";
            cin>>depositamount;
            account.deposit(depositamount);
            break;
            case 2:
            double withdrawlamount;
            cout<<"Enter withdrawal amount: ";
            cin>>withdrawlamount;
            account.withdraw(withdrawlamount);
            break;
            case 3:
            account.displayDetails();
            break;
            case 4:
            exit(0);
            default:
            cout<<"Invalid choice.Please try again."<<endl;
        }
    }
    return 0;
}