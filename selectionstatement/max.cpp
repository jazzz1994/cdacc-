#include <iostream>
using namespace std;

void max()
{

  int a,b,c,great;	 
  cout<<"Enter any three number";
  cin>>a>>b>>c;
  great = a>b?(a>c?a:c):(b>c?b:c);
  cout<<"greatest of three number is: "<<great<<endl;
}