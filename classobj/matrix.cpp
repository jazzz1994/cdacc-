#include<iostream>
using namespace std;

class Matrix{

 	int rows,cols;
 	int **arr;
 public:
 	Matrix();
 	Matrix(int,int);
 	Matrix(Matrix &);
 	Matrix operator+(const Matrix &m);
 	 ~Matrix();
 	void Display();

};

Matrix::Matrix(){
	this->rows = 3;
	this->cols = 3;
	arr  =new int *[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j] = 0;
		}
	}
}

Matrix::Matrix(int rows,int cols){
	this->rows = rows;
	this->cols = cols;
	arr  =new int *[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j] = 0;
		}
	}
}
Matrix::Matrix(Matrix &m){
	this->rows = m.rows;
	this->cols = m.cols;
	arr  =new int *[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j] = m.arr[i][j];
		}
	}

}
Matrix Matrix::operator+(const Matrix &m)
{
	Matrix temp;
	rows = m.rows;
	cols = m.cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			temp.arr[i][j] = arr[i][j]+m.arr[i][j];
		}
	}
	return temp;
}

void Matrix::Display(){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<"\t";
		}

		cout<<endl;
	}
}

Matrix::~Matrix(){
 
 cout<<cols;
for(int i = 0; i < rows; i++)
	{
		delete [] arr[i];
	}
	delete [] arr;

 }



int main(){

Matrix m1(),m2(),m3();
m3.Display();
m3=m1+m2;
m3.Display();
return 0;
 }