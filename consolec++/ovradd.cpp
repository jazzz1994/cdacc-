#include<iostream>
using namespace std;
int add(int a,int b);
float add(float a,float b);
double add(double a,double b);

int main()
{
 cout<<"addition of integer  "<<add(10,20)<<endl;
 cout<<"addition of float  "<<add(10.0f,20.1f)<<endl;
 cout<<"addition of double  "<<add(10.212,20.41)<<endl;
 return 0;
}
int add(int a,int b)
{
 return a+b;

}

float add(float a,float b)
{
 return a+b;

}

double add(double a,double b){

 return a+b;
}
