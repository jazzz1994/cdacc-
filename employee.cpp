#include<iostream>
#include<string.h>
using namespace std;


class Employee
	{
		int emp_id;
		char emp_name[20];
		double salary;
	public:
		Employee();
		Employee(int, char[], double);
		void Accept();
		void Display();
		void Update(int, Employee[],int);
	};

Employee::Employee(){

	emp_id = 0;
	strcpy(emp_name," ");
	salary = 0;

}

Employee::Employee(int id, char name[], double salary){

	this->emp_id=id;
	strcpy(emp_name,name);
	this->salary = salary;

}

void Employee::Accept(){
	cout<<"Enter the Employee Details(emp_id/emp_name/salary)"<<endl;
	cin>>emp_id>>emp_name>>salary;
    
}
void Employee::Display(){
	cout<<" Employee Details(emp_id/emp_name/salary) are "<<endl;
	cout<<emp_id<<"  "<<emp_name<<"  "<<salary<<endl;
    
}
void Employee::Update(int id,Employee e[],int i){
    
    char name[20];
    double salary;

    for(int a=0;a<i;a++){
     	if(e[a].emp_id == id){
     		cout<<"Enter the new name"<<endl;
     		cin>>name;
     		cout<<"Enter the new salary"<<endl;
     		cin>>salary;
     		strcpy(e[a].emp_name,name);
     		e[a].salary=salary;
     	}
    }
    

}


int main(){

	  Employee emp[20],e1;
	  int n,id;
	  static int i=0;
label:cout<<"Enter 1 to insert record"<<endl;
	  cout<<"Enter 2 to update a specific record"<<endl;
	  cout<<"Enter 3 to display all record"<<endl;
	  cout<<"Enter 4 to quit";
	  cin>>n;

	switch(n){
		case 1:
			emp[i].Accept();
			i++;
			goto label;
			break;
		case 2:
			cout<<"Enter the employee id you want to update";
			cin>>id;
			e1.Update(id,emp,i);
			goto label;
			break;	
		case 3:
			for(int a=0;a<i;a++){
				emp[a].Display();
			}
			goto label;
			break;	
		default:
		   break;	
	}

	return 0;

}