#include <iostream>
using namespace std;
int main ()
{
	int num,reverse;
	cout << "Enter the four digit number: "<<"\n";
	cin >> num;
	
	reverse=num;
	
	cout << num / 1000 << " ";
	num = num % 1000;
	cout << num / 100 << " ";
	
	num = num % 100;
	cout << num / 10 << " ";
	
	num = num % 10;
	cout << num << "\n";
	
	
	
	
	
	return 0;
}
