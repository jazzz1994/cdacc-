#include <iostream>
using namespace std;

void areaCircum(float *,float *,float *);
void areaPeri(float *,float *,float *,float *);

int main()
{
  float areaC,circumC,areaR,circumR,r,l,b,option;

  cout<<"press 1 to calculate the area and circumferance of circle"<<endl;
  cout<<"press 2 to calculate the area and circumferance of rectangle"<<endl;

  cin>>option;
  
  if(option==1){
  	cout<<"Enter the radius"<<endl;
    cin>>r;
    areaCircum(&r,&areaC,&circumC);
    cout<<"area is "<<areaC<<endl;
    cout<<"perimeter is "<<circumC<<endl;	

  }else if(option==2){
  	cout<<"Enter the length and breadth"<<endl;
    cin>>l>>b;
     areaPeri(&l,&b,&areaR,&circumR); 
      cout<<"area is "<<areaR<<endl;
      cout<<"perimeter is "<<circumR<<endl;

  }else{
  	cout<<"invalid option";
  }

  return 0;
  
}

void areaCircum(float *r, float *areaC, float *circumC){
  *areaC    = 3.14*(*r)*(*r);
  *circumC = 2*3.14*(*r);
}

void areaPeri(float *l, float *b, float *areaR, float *circumR){
  *areaR    = (*l)*(*b);
  *circumR = 2*(*l)+2*(*b);
}