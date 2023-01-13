#include<iostream>
using namespace std;
string checkspeed(float);
main(){
   float speed;
   cout<<"Enter your Speed";
   cin>>speed;
  string fast_root=checkspeed(speed);
  cout<<"The Speed is "<<fast_root;

}

string checkspeed(float speed){
   string fast_speed;
   if(speed<=10){
    fast_speed="Slow";
   }

    if(speed>10 && speed<=50){
    fast_speed="Average";
   }

 if(speed>50 && speed<=150 ){
    fast_speed="Fast";
   }
 if(speed>150 && speed<=1000 ){
    fast_speed="Ultrra fast";
   }
 if(speed>1000){
    fast_speed="extremely fast";
   }

   return fast_speed;


}