#include<iostream>
using namespace std;
int mul(int,int,int=1,int=1);
int main()
{
int a=10,b=12,c=5,d=3;
cout<<mul(a,b)<<endl;
cout<<mul(a,b,c)<<endl;
cout<<mul(a,b,c,d)<<endl;
return 0;
}

int mul(int a,int b,int c,int d){

   return a*b*c*d;
}


