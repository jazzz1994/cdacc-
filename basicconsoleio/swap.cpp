#include<iostream>
using namespace std;
int main()
{
int a,b,temp;
cout<<"enter the two number"<<endl;
cin>>a>>b;
temp=a;
a=b;
b=temp;
cout<<"after swap"<<endl;
cout<<a<<"  "<<b<<endl;
return 0;
}
