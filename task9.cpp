#include<iostream>
#include<windows.h>
using namespace std;
bool isSimilar(string,string);
main(){
string name_1,name_2;
cout<<"Enter first thing: ";
cin>>name_1;
cout<<"Enter second thing: ";
cin>>name_2;
bool result=isSimilar(name_1,name_2);
if(result==true){
    cout<<"yes";
}
else{
    cout<<"false";
}


}

bool isSimilar(string name_1,string name_2){

if(name_1 =="name_2"){
    
    return true;

}

if(name_1!="name_2"){

    return false;

}
return 0;

}

