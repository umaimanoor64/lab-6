#include<iostream>
using namespace std;
float lowestPrice(string time, int km);
main()
{
    int km;
    string period;
    float result;
    cout<<"enter period=";
    cin>>period;
    cout<<"enter kilometers=";
    cin>>km;
    result=lowestPrice(period,km);
    cout<<"cheapest pricetomtravel is= "<<result;
}
float lowestPrice(string period, int km)
{
    float price;
    if(period=="day" && km>20)
    {
      price=(km*0.79) + 0.70;
    }
    if(period=="night" && km>20 )
    {
        price=(km*0.90) + 0.70;
    }
    if(km<=100 && (period=="day" || period=="night"))
    {
        price=km*0.06;
    }
    if(km<=20 && (period=="day" || period=="night"))
    {
        price=km*0.09;
    }
    return price;
}

