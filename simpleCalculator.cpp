#include <iostream>
using namespace std;
int main (){
    char choice;
        do{
            double num1,num2,result;
        char op;
       
        std::cout<<"Enter your choice op +,-,*,/"<<endl;
        std::cin>>op;
        std::cout<<"Enter num1 "<<endl;
        std::cin>>num1;
        std::cout<<"Enter num2 "<<endl;
        std::cin>>num2;
      
        switch(op){
            case '+':
            result = num1 + num2;
            std::cout<<"result = "<<result <<endl;
            break;
           
            case '-':
            result = num1 - num2;
            std::cout<<"result = "<<result<<endl;
            break;  

            case '*':
            result = num1 * num2;
            std::cout<<"result = "<<result<<endl;
            break;
             
            case '/':
            result = num1 / num2;
            std::cout<<"result = "<<result <<endl;
            break;

            default:
            std::cout<<"Please enter valid opreator!"<<endl;
            break;

        }
     
        std ::cout<<"do you want to continue ?  (yes/no)! ";
        std::cin>>choice;

        } while(choice =='y'||choice =='yes');
        std::cout<<"Thank you Good bye!";
       return 0;


        

}
    