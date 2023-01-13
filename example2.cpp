#include<iostream>
using namespace std;
int isGreater(int num1, int num2, int num3);
main
(){
   int num_1,num_2,num_3;
   cout<<"Enter first Number ";
    cin>>num_1;  
   cout<<"Enter second Number ";
    cin>>num_2;  
    cout<<"Enter third Number ";
    cin>>num_3;  
    int greater= isGreater(num_1,num_2,num_3);
    cout<<"grater number " <<greater;
}

int isGreater(int num1, int num2, int num3){
    int gratest;
   if(num1>num2 && num1>num3){
    gratest= num1;
     
   }
    else if(num2>num1 && num2>num3){
  gratest= num2;
     
   }

 else if(num3>num2 && num3>num1){
   gratest= num3;
     
   }
   
  return  gratest;

}

