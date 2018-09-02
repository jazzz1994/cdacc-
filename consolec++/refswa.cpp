#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
int a,b;
cout<<"enter the two number";
cin>>a>>b;
cout<<a<<"\t"<<b<<"\t"<<endl;
swap(a,b);
cout<<a<<"\t"<<b<<"\t"<<endl;
return 0;
}
void swap(int &ra,int &rb)
{
int temp;
temp=ra;
ra=rb;
rb=temp;
}
