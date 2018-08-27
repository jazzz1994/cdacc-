#include<iostream>
using namespace std;

int main()
{
int hra,da,pf,gs,ns,bs;
cout<<"enter the basic salary"<<endl;
cin>>bs;
hra=0.15*bs;
da=0.3*bs;
gs=bs+hra+da;
pf=0.125*gs;
ns=gs-pf;
cout<<"net salary is "<<ns<<endl;

return 0;
}
