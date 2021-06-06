#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
	private:
	        int hours,minutes,seconds;
	public:
		void read();
	        void convert();
	        void display();
};
void Time::read()
{
	cout<<"Enter Hours: ";
	cin>>hours;
	cout<<"Enter Minutes: ";
	cin>>minutes;
	cout<<"Enter Seconds: ";
	cin>>seconds;
}
void Time::convert()
{
	seconds+=hours*60*60+minutes*60;
	cout<<"\n \n Time (in seconds) is = "<<seconds<<" secconds"<<endl;
}
void Time::display()
{
	cout<<"\n \n Time (in hh/mm/ss) is = "<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)<<setfill('0')<<minutes<<":"<<setw(2)<<setfill('0')<<seconds<<endl;
}
int main()
{
	Time T1;
	T1.read();
	T1.display();
	T1.convert();
	return 0;
}

