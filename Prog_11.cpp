#include<iostream>
using namespace std;

class BankAccount{
    protected:
    string account_number;
    double balance;
    public:
    BankAccount(){
        cout << "Enter Account Number : ";
        cin >> account_number;
        cout << "Enter balance : ";
        cin >> balance;
    }
    void deposit(double amount){
        balance = balance+amount;
        cout << "Yout deposited Amount is : " << amount << endl;
    }
    void withdraw(double amount){
        if(amount > balance){
            cout << "insufficient balance!!" << endl;
        }
        else{
            balance = balance-amount;
            cout << "amount withdrawed : " << amount << endl;
        }
    }
    
    void print(){
        cout << "Account Number : " << account_number << endl;
        cout << "balance        : " << balance << endl;
    }
};

class SavingsAccount : public BankAccount{
    double rate_of_interest;
    public:
    void inputSavings() {
        cout << "Enter Rate of Interest (%): ";
        cin >> rate_of_interest;
    }

    void calculateInterest() {
        double interest = (balance * rate_of_interest) / 100;
        cout << "Interest Earned: " << interest << endl;
        balance += interest;
    }

    void displaySavings() {
        cout << "\n--- Savings Account Details ---\n";
        print();
        cout << "Rate of Interest: " << rate_of_interest << "%" << endl;
    }
};

class currentAccount : public BankAccount{
    double minimum_balance;
    double service_charge;
    public:
    void inputCurrent() {
        cout << "Enter Minimum Balance: ";
        cin >> minimum_balance;
        cout << "Enter Service Charge: ";
        cin >> service_charge;
    }

    void calculateServiceCharge() {
        if (balance < minimum_balance) {
            cout << "Balance below minimum! Service charge of " << service_charge << " applied." << endl;
            balance -= service_charge;
        } else {
            cout << "No service charge applied." << endl;
        }
    }

    void displayCurrent() {
        cout << "\n--- Current Account Details ---\n";
        print();
        cout << "Minimum Balance: " << minimum_balance << endl;
        cout << "Service Charge: " << service_charge << endl;
    }
};

int main(){
    double n, k;
    SavingsAccount s1;
    cout << "Enter Savings Account Details:\n";
    s1.inputSavings();
    cout << "enter amount to deposit : ";
    cin >> n;
    s1.deposit(n);
    s1.calculateInterest();
    s1.displaySavings();
    
    cout << endl;
    
    currentAccount c1;
    cout << "\nEnter Current Account Details:\n";
    c1.inputCurrent();
    cout << "enter amount to withdraw : ";
    cin >> k;
    c1.withdraw(k);
    c1.calculateServiceCharge();
    c1.displayCurrent();
    return 0;
}
