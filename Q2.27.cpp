#include <iostream>
using namespace std;
int main ()
{
	cout << "a :" ;
	cout << static_cast<int>('a') << "\n";	
	cout << "c :" ;
	cout << static_cast<int>('c') << "\n";
	cout << "$ :" ;
	cout << static_cast<int>('$') << "\n";
	cout << "z :" ;
	cout << static_cast<int>('z') << "\n";
	cout << "578 :" ;
	cout << static_cast<int>('578') << "\n";
	return 0;
}
