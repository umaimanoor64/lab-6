#include<iostream>
#include<cmath>
using namespace std;
float volleyball(float holidays, string year, float weekends);
main()
{
    float holidays,weekends;
    string year;
    cout<<"enter count of holidays in year= ";
    cin>>holidays;
    cout<<"enetr year normal/leap= ";
    cin>>year;
    cout<<"enter number of wekends= ";
    cin>>weekends;

    float result = volleyball(holidays, year,weekends);
    

}
float volleyball(float holidays, string year, float weekends)
{
    float sofiatravel,playtime,totalplay;
    sofiatravel = 48 - weekends;
    playtime = (3*(sofiatravel/4)) + (2*(holidays/3));
    totalplay = playtime + weekends;
    if(year=="leap")
    {
        totalplay = ((totalplay*15)/100) + totalplay;
        cout<<floor(totalplay);
    }
    if(year=="normal")
    {
        cout<<floor(totalplay);
    }
      return totalplay;
}

