#include<iostream>
using namespace std;
float low_price(int kilometer,string time);
main(){
  int kilometer;
  string time;
  cout<<"Enter kilometer ";
  cin>>kilometer;
  cout<<"Enter time ";
  cin>>time;
  float final_result=low_price(kilometer,time);
  cout<<" cheapest prics is  "<<final_result;

}

float low_price(int kilometer,string time){
 float result;


 if(time=="day" && time=="night" || kilometer>=100){
result=0.06*kilometer;
}
else if(time=="day" && time=="night" || kilometer>=20 && kilometer<=99){
result=0.09*kilometer;
}

else if(time=="day" && kilometer<=19 ){
result=(0.79*kilometer)+0.7;
}

else if (time=="night" && kilometer<=19   ){
result=(0.90*kilometer)+0.7;
}

return result;



}