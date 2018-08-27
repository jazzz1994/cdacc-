#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"enter the year name"<<endl;
cin>>year;
if(year%4==0 && year%100!=0 || year%400==0) 
	{
	cout<<"year is leapyear"<<endl;
    }
else
   {
     cout<<"year is not leap year"<<endl;
 }
return 0;
}
