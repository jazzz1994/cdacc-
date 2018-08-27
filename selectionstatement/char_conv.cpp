#include <iostream>
using namespace std;

int char_conv()
{
  char ch;
  cout<<"Enter any character";
  cin>>ch;
  if(ch>='a' && ch<='z')
    {
       
        ch='A'+(ch-'a');
        cout<<ch; 
    }
  else if(ch>='A'&& ch<='Z')
    {
        ch = 'a'+(ch-'A');
        cout<<ch;
    }
  else{
  	cout<<"wrong input";
  }

  
}