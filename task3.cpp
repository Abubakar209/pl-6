#include<iostream>
using namespace std;
string checkTitle(int , char);
main(){
    int age;
    char gender;
    cout<<"Enter your gender: ";
    cin>>gender;
    cout<<"Enter your Age: ";
    cin>>age;
  string Answer=checkTitle(age ,gender);
  cout<<" "<<Answer;

}
string checkTitle(int age_1 , char gender_1){
 string title;
if(age_1>=16 && gender_1=='M'){
    title="Mr.";
}

if(age_1<16 && gender_1=='M'){
    title="Master";
}

if(age_1>=16 && gender_1=='F'){
    title="Ms.";
}

if(age_1<16 && gender_1=='F'){
    title="Miss";
}
return title;
}
