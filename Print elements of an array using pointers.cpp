#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char array[10],*pointer;
	int n,i;
	cout<<"Enter Number of Elements in the Array: ";
	cin>>n;
	cout<<"Enter the Elements of the Array: ";
	pointer=&array[0];
	for(i=0;i<n;i++)
	{
		cin>>pointer+i;
	}
	pointer=&array[0];
	cout<<"The Elements in the Array are:  ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<*(pointer+i);
	}
}
