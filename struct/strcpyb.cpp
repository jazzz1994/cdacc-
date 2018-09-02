#include<iostream>
using namespace std;

typedef struct book{

	int id;
	char name[20];
	float price;
} bk;
int main(){
    
    bk b1,b2;
    cout<<"Enter the book id"<<endl;
    cin>>b1.id;
    cout<<"Enter the book name"<<endl;
    cin>>b1.name;
    cout<<"Enter the price"<<endl;
    cin>>b1.price;
    b2 = b1;
    cout<<b2.id<<"\t"<<b2.name<<"\t"<<b2.price<<endl;
     
	return 0;
}