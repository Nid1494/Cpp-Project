#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"\t \t \t To know if you are Eligible to vote or not"<<endl;
	cout<<"\n Please Enter your Age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"\n \n You are eligible to vote"<<endl;
	}
	else
	{
		cout<<"\n \n You are not eligible to vote yet...";
		cout<<"You will have to wait "<<18-age<<" more years to be eligible to vote"<<endl;
	}
	return 0;
}
