#include<iostream>
using namespace std;
int IsPrime(int num)
{
	int i,prime=1;
	for(i=2;i<=num/2;++i)
	{
		if(num%i==0)
		{
			prime=0;
			break;
		}
	}
	return prime;
}
int main()
{
	int num,i;
	cout<<"Enter a Positive Number: ";
	cin>>num;
	for(i=2;i<=num/2;++i)
	{
		if(IsPrime(i))
		{
			if(IsPrime(num-i))
			{
				cout<<" \n \t \t"<<num<<" = "<<i<<" + "<<num-i<<endl;
			}
		}
	}
	return 0;
}
