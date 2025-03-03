#include<iostream>
using namespace std;

int main(){
    int n;
    int  sum = 0;
    cout<<"Enter a value of n : "<<endl;
    cin>> n;
    for(int i = 1;i<=n;i++)
    sum += i;
cout<<"The sum of the numbers is   : " << sum <<endl;

}