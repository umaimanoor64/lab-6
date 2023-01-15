#include<iostream>
using namespace std;
float  income(string type, int rows, int col);
main()
{
    int rows,col;
    string type;
    float price,result;
    cout<<"enetr the rows=";
    cin>>rows;
    cout<<"enter the columns=";
    cin>>col;
    cout<<"enter timing of screen=";
    cin>>type;
    result=income(type,rows,col);
    cout<<"total income of a shift is = "<<result;
}
float income(string type, int rows, int col)
{
    float total;
    if(type=="premiere")
    {
        total=rows*col*12;
    }
    if(type=="normal")
    {
        total=rows*col*7.50;
    }
    if(type=="discount")
    {
        total=rows*col*5;
    }
return total;
}
