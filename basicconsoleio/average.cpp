#include<iostream>
using namespace std;

int main(){

	int a,b,c,d,e,sum;
	float avg;
	cout<<"Enter the value of five number";
	cin>>a>>b>>c>>d>>e;
        sum=a+b+c+d+e;
	avg=sum/5;
	cout<<"avg implicit="<<avg<<endl;
        avg =(float)sum/5;
        cout<<"avg explicit="<<avg<<endl;
        return 0;
}
