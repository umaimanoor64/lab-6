
#include<iostream>
using namespace std;
bool same(int num1, int num2, int  num3);
main()
{    
    int num1,num2,num3;
    bool result;
    cout<<"enter num 1=";
    cin>>num1;
    cout<<"enter num 2=";
    cin>>num2;
    cout<<"enyer num 3=";
    cin>>num3;
    result=same(num1,num2,num3);
    if(result==true)
    {
        cout<<"yes"<<endl;
    }
    if(result==false)
    {
        cout<<"no"<<endl;
    }
    
}
bool same(int num1, int num2, int  num3)
{
     bool final;
    if(num1==num2 && num2 == num3)
    {
     return true;
    }
     else
    {
    return false;
    }
     return 0;
}