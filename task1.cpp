#include<iostream>
using namespace std;
char grade_1(int num_1);
main(){
int num;
cout<<"Enter your Marks ";
cin>>num;
char name_grade=grade_1(num);
 cout<<"Your Grade is : "<<name_grade;
}


char grade_1(int num_1){
     char grade;
    if(num_1>=90){
       grade='A';
    
    }
 else if(num_1>80 && num_1<=85){
       grade='B';
    
    }

   else if(num_1>70 && num_1<=80){
       grade='C';
    
    }
     else if(num_1>=60 && num_1<=70){
       grade='D';
    
    }

    else if(num_1>=50 && num_1<60){
       grade='e';
    
    }
     if(num_1<49){
       grade='f';
    
    }
  return grade;


}