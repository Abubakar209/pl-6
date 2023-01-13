#include<iostream>
using namespace std;
void remainig_money(float budget,string seats,int num_people);
main(){
 int num_people;
 string seats;
 float budget;
 cout<<"Enter Budget ";
 cin>>budget;
 cout<<"Enter Ticket type: Normal or VIP ";
cin>>seats;
cout<<"Enter number of people";
cin>>num_people;
 remainig_money(budget,seats,num_people);

}

void remainig_money(float budget,string seats,int num_people){
  
   if(seats=="VIP"){
    float after_ticket;
      if(num_people<=4){
      float  result=budget-(budget*0.75);
      float ticket=num_people*499.99;
      after_ticket=ticket-result;
      if(after_ticket<result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

       if(num_people>=5 && num_people<=9){
      float  result=budget-(budget*0.60);
      float ticket=num_people*499.99;
      after_ticket=ticket-result;
      if(after_ticket<result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

 if(num_people>=10 && num_people<=24){
      float  result=budget-(budget*0.50);
      float ticket=num_people*499.99;
      after_ticket=ticket-result;
      if(after_ticket<result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }


 if(num_people>=25 && num_people<=49){
      float  result=budget-(budget*0.40);
      float ticket=num_people*499.99;
      after_ticket=ticket-result;
      if(after_ticket<result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }


       if(num_people>=50){
      float  result=budget-(budget*0.25);
      float ticket=num_people*499.99;
      after_ticket=ticket-result;
      if(after_ticket<result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

   }//vip end

  else if(seats=="NORMAL"){
    float after_ticket;
      if(num_people<=4){
      float  result=budget-(budget*0.75);
      float ticket=num_people*249.99;
      after_ticket=result-ticket;
      if(after_ticket>result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

       if(num_people>=5 && num_people<=9){
      float  result=budget-(budget*0.60);
      float ticket=num_people*249.99;
      after_ticket=result-ticket;
      if(after_ticket>result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

 if(num_people>=10 && num_people<=24){
      float  result=budget-(budget*0.50);
      float ticket=num_people*249.99;
      after_ticket=result-ticket;
      if(after_ticket>result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }


 if(num_people>=25 && num_people<=49){
      float  result=budget-(budget*0.40);
      float ticket=num_people*249.99;
      after_ticket=result-ticket;
      if(after_ticket>result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }


       if(num_people>=50){
      float  result=budget-(budget*0.25);
      float ticket=num_people*249.99;
      after_ticket=result-ticket;
      if(after_ticket>result){
          cout<<" you need more"<<after_ticket;
      }
      else{
         cout<<" you have "<<after_ticket<<" remaing";
      }
      }

   }






























































}