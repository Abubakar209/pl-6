#include<iostream>
using namespace std;
float checkCost(string,string,int);
main(){
int quantity;
string city,product;
cout<<"Enter Product: ";
cin>>product;
cout<<"Enter City: ";
cin>>city;
cout<<"Enter Quantity: ";
cin>>quantity;
float prize=checkCost(product,city,quantity);
cout<<" "<<prize;


}



float checkCost(string product,string city,int quantity){
    float result;
if(city=="sofia"){
if(product=="coffe"){
    result=0.50*quantity;
}
if(product=="beer"){
    result=1.20*quantity;
}

if(product=="water"){
    result=0.80*quantity;
}
if(product=="sweets"){
    result=1.45*quantity;
}
if(product=="peanuts"){
    result=1.60*quantity;
}


}

else if(city=="piodiv"){
if(product=="coffe"){
    result=0.40*quantity;
}
if(product=="beer"){
    result=1.15*quantity;
}

if(product=="water"){
    result=0.70*quantity;
}
if(product=="sweets"){
    result=1.30*quantity;
}
if(product=="peanuts"){
    result=1.50*quantity;
}


}
else if(city=="varna"){
if(product=="coffe"){
    result=0.45*quantity;
}
if(product=="beer"){
    result=1.10*quantity;
}

if(product=="water"){
    result=0.70*quantity;
}
if(product=="sweets"){
    result=1.35*quantity;
}
if(product=="peanuts"){
    result=1.55*quantity;
}


}

return result;

}