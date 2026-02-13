#include<iostream>
using namespace std;

class Satellite{
	const string date;
	const int id;
	static int views;
	float radius;

		
	public:
		Satellite(string sat_date, int sat_id, float r) : date(sat_date), id(sat_id) {
			radius = r;
		    
		}
		
		void viewReport() const{
			views++;
			cout<<"Satellite id: "<<id<<endl;
			cout<<"Satellite launch date: "<<date<<endl;
			cout<<"Radius: "<<radius<<endl;
			cout<<"Total number of views so far: "<<views<<endl;
			cout<<"\n"<<endl;
			
		}
	
		float calibrate()
		{
			radius = 2 * radius + 5 - 2.15;
		}
	 
};

int Satellite :: views;


int main()
{
	Satellite s1("12Jan", 1001, 25.05);
	Satellite s2("15Feb", 1002, 52.12);
	Satellite s3("19March", 1003, 12.32);
	
	s1.viewReport();
	s2.viewReport();
		
	return 0;
}

