#include<iostream>
using namespace std;
string carstate(float speed);
main()
{
int speed;
string result;
cout<<"enter speed of the car=";
cin>>speed;
result=carstate(speed);
cout<<result;
}
string carstate(float speed)
{
    string state;
if(speed<10)
{
    cout<<"slow"<<state<<endl;
}
else if (speed>10 &&speed<50)

{
   cout<<"average"<<state<<endl;
}
else if(speed>50 && speed<150)
{
    cout<<"fast"<<state<<endl;
}
else if(speed>150 && speed<1000)
{
    cout<<"ultra-fast"<<state<<endl;
}
else{
    cout<<"ultra fast"<<state<<endl;
}
return state;
}