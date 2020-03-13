// CONSTRUCTORS DESTRUCTORS

#include<iostream>
using namespace std;

class Employee{
	public:
	string name;
	string cnic;
	int salary;
	
	void sign_in();
	void sign_out();
	
	Employee();
	Employee(int salary);
	
};

Employee::Employee()
{
	cout<<"Constructor has been created"<<endl;
	salary=1000;
}
Employee::Employee(int salary)
{
	this->salary=salary;
	
	cout<<"after overriding: "<<endl;
	cout<<salary;
}

void Employee::sign_in()
{
	cout<<"Name: ";
	cin>>name;
}

int main()
{
	Employee e1;
	e1.sign_in();
	cout<<"Name: "<<e1.name<<endl;
	cout<<"Salary:: "<<e1.salary<<endl;
	Employee(50);
	
	
}
