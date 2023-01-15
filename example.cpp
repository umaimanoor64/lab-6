#include<iostream>
using namespace std;
int greatest(int num1,int num2, int num3);
int main()
{
int num1,num2,num3,result;
cout<<"enter number 1= ";
cin>>num1;
cout<<"enter number 2= ";
cin>>num2;
cout<<"enter number 3= ";
cin>>num3;
result=greatest(num1,num2,num3);
cout<<"greatest number is="<<result;
}
int greatest(int num1, int num2, int num3)
{
    int largest;
if((num1>num2)&&(num1>num3))
{    
    largest=num1;
    
}
if((num2>num1)&&(num2>num3))
{
      largest=num2;
}
else
{
    largest=num3;
}
return largest;
}