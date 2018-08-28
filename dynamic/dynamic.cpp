#include<iostream>
using namespace std;

int main(){

	int n, *p,sum=0;
	float avg=0;
	cout<<"Enter the no of subject";
	cin>>n;
	p=(int*)malloc(n*sizeof(int));
	cout<<"Enter marks of subjects";
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
   for(int i=0;i<n;i++){
   	sum=sum+p[i];
   }

   avg=sum/n;
   cout<<"average is :"<<avg<<endl;
   free(p);
   p=NULL;

return 0;
}