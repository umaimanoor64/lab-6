#include<iostream>
using namespace std;
char marks( int number);
main()
{
    int num;
    char result;
    cout<<"enter numbers= ";
    cin>>num;
    result=marks(num);
    cout<<"grades are= "<<result;
}
char marks(int number)
{
    char grade;
    if(number<50)
{
      grade='F';
}
else if(number>=50 && number<=60)
{
     grade='E';
}
else if(number>=60 && number<=70)
{
      grade='D';
}
else if(number>=70 && number<=80)
{
      grade='C';
}
else if(number>=80 && number<=90)
{
       grade='B';
}
else if(number>=90 && number<=100)
{ 
       grade='A';
}
return grade;
}