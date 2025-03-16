#include <iostream>
using namespace std;
class BankAccount {
    private :
    string accountname;double accountnumber;int age;double balance;
    
    public :
    BankAccount(string accname,double accnumber,int accage,double initialbalance){
        accountname = accname;
        accountnumber = accnumber;
        age = accage;
        balance = initialbalance;
    }
    double showbalance(){
        return balance ;
    }
    void deposit(double amount){
        if(amount < 0){
            cout<<"invalid 0 can't be deposited"<<endl;
        }
        else {
            balance += amount;
            cout<<"deposit succesfully  = " <<balance <<endl;
        }
        
    }
    void withdraw(double amount){
        if(amount > balance){
            cout<<"insufficent balance!"<<endl;
        }
        else {
            balance-=amount;
            cout<<"succesfully withdrawal = "  << balance <<endl;
        }
    }
    void displaydata(){
        cout<<"Account Name = "<<accountname<<endl;
        cout<<"Account Number = "<<accountnumber<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Current Balance is = "<<balance <<endl;
    }
    
    
};
int main() {
    string accountname;
    double accountnumber,balance;  int age;
    cout<<"Enter your Account Name"<<endl;
    cin>>accountname;
    cout<<"Enter your Account Number"<<endl;
    cin>>accountnumber;
    cout<<"Enter your Age: "<<endl;
    cin>>age;
    cout<<"Enter your balance = "<<endl;
    cin>>balance;
    
    BankAccount MyAccount(accountname,accountnumber,age,balance);
    int choice ;
    do
    {
        cout<<"********** Bank Account ****************"<<endl;
        cout<<"1 show balance"<<endl;
        cout<<"2 deposit money"<<endl;
        cout<<"3 withdraw money"<<endl;
        cout<<"4 display detail "<<endl;
        cout <<"5  exit " <<endl;
        cin>>choice;
        
        switch(choice){
            case 1:
            cout <<"your balance is = "<<  MyAccount.showbalance()<<endl;
            break;
            
            case 2 :
            double amount;
            cout<<" Enter the amount to deposit"<<endl;
            cin>>amount;
            MyAccount.deposit(amount);
            break;
            
            case 3:{
            double amount;
            cout<<"Enter amonut to withdraw"<<endl;
            cin>>amount;
            MyAccount.withdraw(amount);
            break;
            }
            
            case 4: 
             MyAccount.displaydata();
             break;
             
             case 5:
             cout<<"Thank you for using our bank system Goodbye!"<<endl;
                break;
                default:
                cout<<"Invalid choice please try again!";
        }
         
    } while(choice !=5);
    
    
    return 0;
}