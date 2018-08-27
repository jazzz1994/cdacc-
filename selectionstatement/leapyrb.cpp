#include<iostream>
using namespace std;
int main()
{
 int year;
 cout<<"enter the year name"<<endl;
 cin>>year;
  ((year%4==0 && year%100!=0) || (year%400==0)) ?cout<<"year is leapyear"<<endl:cout<<"year is notleapyear"<<endl; 


 return 0;  
}
