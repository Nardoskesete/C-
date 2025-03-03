#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout<<"Enter the numbers "<<endl;
    
    for(int i = 0;i<5; i++){
        cin>>arr[i];
    }
   
    int maxNum = arr[0];
    for(int i = 1 ; i < 5;i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    cout<<"Maximum number in the array is "<<maxNum<<endl;

}