#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout <<"Enter num a" <<endl;
    cin >> a;
    cout <<"Enter num b "<<endl;
    cin >> b;
    
    cout <<"before swappin the numbers  " <<endl  ;
    cout<< "a =" << a << endl;
    cout<< "b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b ;
    
     
    cout <<"After swappin the numbers  " <<endl  ;
    cout<< "a =" << a << endl;
    cout<< "b = " << b << endl;
    
    return 0;
}

