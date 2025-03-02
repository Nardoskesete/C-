#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;
    
    do {
        cout << "***********************************************\n";
        cout << "Enter your choice: \n";
        cout << "***********************************************\n";
        cout << "1. Show balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit \n";
        cin >> choice;
        
        switch(choice) {
            case 1: 
                showbalance(balance);
                break;
            case 2: 
                balance += deposit();
                break;
            case 3: 
                balance -= withdraw(balance);
                break;
            case 4: 
                cout << "Thanks for visiting!\n";
                break;
            default:
                cout << "Please enter valid choice\n";
        }
    } while (choice != 4);
    
    return 0;
}

void showbalance(double balance) {
    cout << "Your balance is $" << fixed << setprecision(2) << balance << "\n";
}

double deposit() {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    
    if (amount > 0) {
        cout << "Successfully deposited $" << fixed << setprecision(2) << amount << "\n";
        return amount;
    }
    else {
        cout << "Cannot deposit a negative amount!\n";
        return 0;
    }
}

double withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    
    if (amount <= balance && amount > 0) {
        cout << "Successfully withdrew $" << fixed << setprecision(2) << amount << "\n";
        return amount;
    }
    else if (amount > balance) {
        cout << "Insufficient funds!\n";
        return 0;
    }
    else {
        cout << "Cannot withdraw a negative amount!\n";
        return 0;
    }
}



