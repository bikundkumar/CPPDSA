#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    BankAccount(int accountNumber,double balance) {
        this -> accountNumber = accountNumber;
        this -> balance = balance;
    }
    void deposit(double amount) {
        balance = balance + amount;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
        balance = balance - amount;
        } 
        else {
            cout <<"No sufficient balance of this withdrawal\n";
        }
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    BankAccount obj(1234567,500);
    obj.deposit(200);
    obj.withdraw(100);  

    cout << "Current Balance : Rs." << obj.getBalance() << endl;  
    
}