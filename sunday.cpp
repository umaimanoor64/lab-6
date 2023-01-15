#include<iostream>
using namespace std;
 int discount(string day, string month, int amount);
main()
{
    int amount,result;
    string month,day;
    cout<<"enetr day=";
    cin>>day;
    cout<<"enter month=";
    cin>>month;
    cout<<"enter amount=";
    cin>>amount;
    result=discount(day,month,amount);
    cout<<"payable amount is = "<<result;
}
int discount(string day, string month, int amount)
{
    int payableAmount,amount1;
    if(day=="sunday"&&(month=="october"||month=="march"||month=="august"))
    {
        amount1=amount*0.1;
        payableAmount=amount-amount1;
    }
    else if(day=="monday"&&(month=="november"||month=="december"))
    {
        amount1=amount*0.05;
        payableAmount=amount-amount1;
    }
    else
    {
        payableAmount=amount;
    }
    return payableAmount;
}


