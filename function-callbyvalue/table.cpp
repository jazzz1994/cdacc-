#include<iostream>
using namespace std;

void charLine(char,int);

int main(){
   
    cout<<endl;
	charLine('-',30);
	cout<<"Data type \t Size in Bytes\n";
	charLine('-',30);
	cout<<"Integer   \t"<<sizeof(int)<<"\n";
	charLine('-',30);
	cout<<"Character   \t"<<sizeof(char)<<"\n";
	charLine('-',30);
	cout<<"Float   \t"<<sizeof(float)<<"\n";
	charLine('-',30);

    return 0;
}


void charLine(char ch ,int num){

 for(int i=1;i<=num;i++){
 	cout<<ch;
 }
 cout<<endl;

}