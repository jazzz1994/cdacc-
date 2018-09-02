#include<iostream>
#include <cmath>
using namespace std;

class Complex
{
	private:
	int real;
	int img;

	public:
	Complex();
	Complex(int,int);
	void Display();
	Complex operator+(Complex &);
	Complex operator-(Complex &);
	Complex operator-();
	Complex operator++();
	Complex operator++(int);

};

Complex::Complex(){
  real = 0 ;
  img  = 0;
  
}
Complex::Complex(int real,int img){
  this->real = real;
  this->img = img; 

}

Complex Complex::operator++(int)
{
	Complex temp = *this;
	real++;
	img++;
	return temp;
}
Complex Complex::operator++()
{
	++real;
	++img;
	return *this;
}
Complex Complex::operator+(Complex &c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;
}

Complex Complex::operator-(Complex &c)
{
	Complex temp;
	temp.real=real-c.real;
	temp.img=img-c.img;
	return temp;
}

Complex Complex::operator-()
{
	Complex temp;
	temp.real=-real;
	temp.img=-img;
}

void Complex::Display(){

   char ch = (img<0)?'-':'+'; 
   cout<<real<<ch<<abs(img)<<"i"<<endl;
}

int main()
{
	Complex c1(10,20);
	Complex c2(12,24);
	Complex c6;
	c6=c2-c1;
	c6.Display();
	Complex c3;
	c3=c1+c2;
	c3.Display();
	Complex c4;
	c4=c2;
	c4.Display();
	c2.Display();
        
	Complex c5;
	c5=++c1;
	c1.Display();
	c5.Display();
	c5=c1++;
	c5.Display();
	c1.Display();
	return 0;
}





