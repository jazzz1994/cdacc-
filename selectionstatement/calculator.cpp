#include <iostream>
// #include <conio>
using namespace std;
void calculator()
{
	int a,b,result;
    int i;
    cout<<"enter any two number";
    cin>>a>>b;
    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for multiplication"<<endl;
    cout<<"press 4 for division"<<endl;
    cin>>i;

    switch(i)
    {
     case 1:
        result = a+b;
        break;
     case 2:
        result = abs(a-b);
        break;
     case 3:
        result = a*b;
        break;     
     case 4:
        result = a/b;
        break;

    }

    cout<<"result is "<<result<<endl;
}