#include<iostream>
#include<conio.h>
#include<stdio.h>
#define MAX 100
using namespace std;
int main()
{
	int array[MAX],n,i;
	int *pointer;
	pointer=array;
	cout<<" Enter Number of Elements in the Array: ";
	cin>>n;
	cout<<"\n Enter Elements of the Array: ";
	for(i=0;i<n;i++)
	{
		cin>>*(pointer+i);
	}
	cout<<"\n The Elements of the Array are: ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<*(pointer+i);
	}
	return 0;
}
