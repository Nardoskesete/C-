#include <iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter a number to find the factorial number "<<endl;
    cin>>n;
    if(n>=1){
        cout<<"the factorial number of "<<n<< " = is :"<<factorial(n);
    }

}