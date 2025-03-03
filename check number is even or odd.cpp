#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number  :" << endl;
    cin>>n;
    for(int i = 0;i<=n;i++);
    if(n % 2 == 0){
        cout<<"Its even number " << n<<endl;

    }
    else {
        cout<<"its odd number :" <<n <<endl;
    }

return 0;
}
