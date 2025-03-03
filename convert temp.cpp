#include<iostream>
using namespace std;

int main(){
    float celcius,farenhait;
    cout<<"Enter a tempreture in celcius "<<endl;
    cin>>celcius;
    farenhait = (celcius * 9/5) + 32;
    cout<<"The tempreture in farenhait : "<< farenhait ;

    return 0;
}
