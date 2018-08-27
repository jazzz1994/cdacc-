#include <iostream>
using namespace std;
void commision()
{
	int ns,bs,comm=0,sa;
    cout<<"Enter the basic salary";
    cin>>bs;
    cout<<"Enter the sales amount";
    cin>>sa;
    if(sa>=5000 && sa <=7500){
    	comm = 0.03*sa;
    }
    else if(sa>=7501 && sa >=10500){
        comm = 0.08*sa;
    }
    else if(sa>=10500 && sa >=15000){
        comm = 0.11*sa;
    }
    else if(sa>15000){
        comm = 0.15*sa;
    }
    
    ns = bs+comm;
    
    cout<<"net salary is "<<ns<<endl;
    cout<<"commission is "<<comm<<endl;
}