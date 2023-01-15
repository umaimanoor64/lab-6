#include<iostream>
using namespace std;
string checkTitle (char gender , int age);
main()
{
int age;
char gender;
string result;
cout<<"enetr ur age= ";
cin>>age;
cout<<"enter ur gender=";
cin>>gender;
result=checkTitle(gender,age);
cout<<"title is="<<result;
}
string checkTitle(char gender, int age)
{
    string title;
    if(age<=16&&gender=='m')
    {
      title= "master";
    }
    if(age>=16&&gender=='m')
    {
        title="mr";
    }
    if(age<=16&&gender=='f')
{
     title="miss";
}
    if(age>=16&&gender=='f')
{
    title="ms";
    }
    else
    {
    cout<<"invalid information"<<endl;
}
return title;
}
