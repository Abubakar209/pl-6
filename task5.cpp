#include<iostream>
using namespace std;
float toltalIncome(string screen_name,int row,int column);
main(){
string screen_name;
int row,column;
cout<<"Enter screen name ";
cin>>screen_name;
cout<<"Enter row ";
cin>>row;
cout<<"Enter column ";
cin>>column;
float result=toltalIncome(screen_name,row,column);
 cout<<"total revene is: "<<result;

}

float toltalIncome(string screen_name,int row,int column){
    float income;
if(screen_name=="premium" ){
    income=row*column*12;
}
if(screen_name=="normal" ){
    income=row*column*7.50;
}
if(screen_name=="discount" ){
    income=row*column*5.00;
}
return income;




}