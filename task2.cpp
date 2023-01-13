#include<iostream>
using namespace std;
float final_dis(float,string,string);
main(){
  float amount;
  string day,month;
  cout<<"Enter Amount ";
  cin>>amount;
  cout<<"Enter day ";
  cin>>day;
   cout<<"Enter month ";
  cin>>month;
 float final_price=final_dis(amount,day,month);
 cout<<final_price;
}
float final_dis(float price,string day,string month){
    float original=price;
   if(day=="Sunday" && month=="October" || month=="march" || month=="April" )
   {
     original=price-(price*0.1);
     
     }
     return original;
}