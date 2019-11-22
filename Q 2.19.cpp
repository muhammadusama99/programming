#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Enter third number: ";
	cin>>c;
	d=a+b+c;
	cout<<"Sum is :"<<d<<"\n";
	d=a+b+c/3;
	cout<<"Average is: "<<d<<"\n";
	d=a*b*c;
	cout<<"Product is: "<<d<<"\n";
	if(a<b<c)
	{cout<<"Largest is: "<<c<<"\n";
	}
	if(a<b>c){
		cout<<"Smallest is "<<b<<"\n";
	}
	
	
	return 0;
}
