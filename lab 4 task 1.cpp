#include<iostream>
using namespace std;

class Employee{
	
	string emp_name;
	float emp_salary;	
    int emp_id;	
			
	public:
		static int count;

        
		Employee(string name, float salary)  
		{
			emp_name = name;
			emp_salary = salary;
			emp_id = 1001 + count;
			count++;
		
		}
		
		void display()
		{
			cout<<"ID of Employee: "<<emp_id<<endl;
			cout<<"Name of Employee: "<<emp_name<<endl;
			cout<<"Salary of Employee: "<<emp_salary<<endl;
			cout<<"\n"<<endl;
		}
		
		void counter()
		{
			cout<<count<<" number of objects have been created so far"<<endl;
			cout<<endl;
		}
			
};

int Employee::count;


int main()
{
	Employee e1("Ali", 50000);
	e1.display();
	Employee e2("Hasnain", 100000);
	e2.display();
	Employee e3("Khizar", 80000);
	e3.display();
	Employee e4("Toba", 75000);
	e4.display();

	e1.counter();
	
	Employee e5("Raza", 90000);
	e5.display();
	
	e5.counter();
	

	return 0;
}
