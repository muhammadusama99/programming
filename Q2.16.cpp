#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	char op;
	cout<<"enter first number ";
	cin>>a;

	cout<<"enter operation you want to perform ";
	cin>>op;
	cout<<"enter second number ";
	cin>>b;
	if(op=='+')
	{
		c=a+b;
		cout<<"result of addition is "<<c;
	}
	else if(op=='-')
	{
		c=a-b;
		cout<<"result of subtraction is "<<c;
	}
	else if(op=='*')
	{
		c=a*b;
		cout<<"result of multiplication is "<<c;
	}
	else if(op=='/')
	{
		c=a/b;
		cout<<"result of division is "<<c;
	}
	return 0;
}
