#include <iostream>
using  namespace std;
int main() {
   char letter;
   cout<<"Enter a letter !" <<endl;
   cin>>letter;
   letter = tolower(letter);
   if(letter =='a' || letter == 'e'||letter == 'i'|| letter == 'o' || letter =='u' ){
       cout<<letter <<" = is vowel number ";
   }
   else if((letter >= 'a' && letter <='z')){
       cout<< letter <<" =  is constant !"<<endl;
   }
   else{
       cout<<"Please enter a valid letter!"<<endl;
   }
    return 0;
}