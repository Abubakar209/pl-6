#include<iostream>
using namespace std;
int play_time(string,int,int);

main(){
string year;
int weekends,holydays;
cout<<"Enter Year ";
cin>>year;
cout<<"Enter holydays ";
cin>>holydays;
cout<<"Enter Weekends ";
cin>>weekends;
int final_play=play_time(year,holydays,weekends);
cout<<final_play;




}


int play_time(string year,int holydays,int weekends){
    int result;
    if(year=="Normal"){
        float result_1=48-weekends;
        float result_2=result_1*0.75;
        float result_3=holydays*0.667;
        result=result_2+result_3+weekends;
        



    }
    if(year=="Leap"){
        float result_1=48-weekends;
        float result_2=result_1*0.75;
        float result_3=holydays*0.667;
        float result_4=result_2+result_3+weekends;
       float result_5=result_4*0.15;
       result=result_4+result_5;



    }  


return result;
























}