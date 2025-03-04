#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number of the line for the right angle triangle "<<endl;
    cin>>n;
    for(int i= 1;i<=n;i++){
        for(int k=1;k<=n;k++){
            cout<<" ";
            
        }
        for(int s=1;s<=(2*i-1);s++)
            cout<<"&";
        cout<<endl;
    }
    return 0;
}