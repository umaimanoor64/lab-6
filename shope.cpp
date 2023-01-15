#include<iostream>
using namespace std;
float checkCost(string city, string item  , int quantity);
main()
{
    string city,item;
    int quantity;
    float result;
    cout<<"city name= ";
    cin>>city;
    cout<<"enter item name= ";
    cin>>item;
    cout<<"amount of item= ";
    cin>>quantity;
    result=checkCost(city,item,quantity);
    cout<<"total price of products is= "<<result;
}
float checkCost(string city, string item  , int quantity)
{
    float price;
if(city=="sofia" && item=="coffee") 
{
      price= quantity*0.50;
}
else if(city=="sofia" && item=="water")
{
    price=quantity*0.80;
}
else if (city=="sofia" && item=="beer")
{
    price=quantity*1.20;
}
else if(city=="sofia" && item=="peanuts")
{
    price=quantity*1.60;
}
else if(city=="plovdi" && item=="coffee")
{
    price=quantity*0.40;
}
else if(city=="plovdiv" && item=="water")
{
    price=quantity*0.70;
}
else if(city=="plovdiv" && item=="beer")
{
    price=quantity*1.15;
}
else if(city=="plovdiv" && item=="sweets")
{
    price=quantity*1.30;
}
else if(city=="plovdiv" && item=="peanuts")
{
    price=quantity*1.50;
}
else if(city=="varna" && item=="coffee")
{
    price=quantity*0.45;
}
else if(city=="varna" && item=="water")
{
    price=quantity*0.70;
}
else if(city=="varna" && item=="beer")
{
    price=quantity*1.10;
}
else if(city=="varna" && item=="sweets")
{
    price=quantity*1.35;
}
else if(city=="varna" && item=="peanuts")
{
    price=quantity*1.55;
}
return price;
}









}