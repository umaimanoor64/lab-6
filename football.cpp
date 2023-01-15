#include<iostream>
using namespace std;
float ticket(int people, float money,string category);
float budget1,budget2,rem;
main()
{
  
  float people,money,rem1;
  string category;
  cout<<"enter number of people= ";
  cin>>people;
  cout<<"enter category= ";
  cin>>category;
  cout<<"enter money= ";
  cin>>money;

  rem=ticket( people,  money, category);
  if(budget2<=budget1)
  {
    cout<<"YES! you have"<<rem<<" left"<<endl;
  }
  else if(budget2>budget1)
  {
    cout<<"NOT enough money! you need "<<rem1<<endl;
  }
}
float ticket(int people, float money,string category)
{
    
    if(people>=1 && people<=4 && category=="vip")
    {
      budget1 = money - (money*0.75);
      budget2 = people*499.99;
    }
    else if(people>4 && people<=9 && category=="vip")
    {
      budget1 = money - (money*0.60);
      budget2 = people*499.99;
    }
    else if(people>9 && people<=24 && category=="vip")
    {
      budget1 = money - (money*0.50);
      budget2 = people*499.99;
    }
    else if(people>24 && people<=49 && category=="vip")
    {
      budget1 = money - (money*0.50);
      budget2 = people*499.99;
    }
    else if(people>49 && category=="vip")
    {
      budget1 = money - (money*0.25);
      budget2 = people*499.99;
    }
    else if(people>=1 && people<=4 && category=="normal")
    {
      budget1 = money - (money*0.75);
      budget2 = people*249.99;
    }
    else if(people>4 && people<=9 && category=="normal")
    {
      budget1 = money - (money*0.60);
      budget2 = people*249.99;
    }
    else if(people>9 && people<=24 && category=="normal")
    {
      budget1 = money - (money*0.50);
      budget2 = people*249.99;
    }
     else if(people>24 && people<=49 && category=="normal")
    {
      budget1 = money - (money*0.50);
      budget2 = people*249.99;
    }
    else if(people>49 && category=="normal")
    {
      budget1 = money - (money*0.25);
      budget2 = people*249.99;
    }
    rem=budget2-budget1;
    return rem;
   }

    