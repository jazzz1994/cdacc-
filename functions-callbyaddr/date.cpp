#include <iostream>
using namespace std;

void getDate(int *,int *,int *);

int main()
{
	int dd,mm,yy;
    getDate(&dd,&mm,&yy);
    cout<<"date is : "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	return 0;
}

void getDate(int *dd, int *mm, int *yy){

	cout<<"enter the day";
	cin>>*dd;
	cout<<"enter the month";
	cin>>*mm;
	cout<<"enter the year";
	cin>>*yy;
}