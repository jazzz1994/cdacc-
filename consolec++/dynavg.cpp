#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int n,sum=0,avg;
cout<<"enter the number of subject ";
cin>>n;
int *a=new int[n];
cout<<"enter the marks of subject";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
sum =sum+a[i];
}
cout<<sum;
avg=sum/n;
cout<<avg;
delete a;
a=NULL;
return 0;
}
