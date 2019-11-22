#include <iostream>
using namespace std;
int main()
{
 int num1, num2;
 
 cout << "Enter The First Number: ";
 
 cin >> num1;
 cout << "Enter The Second Number: ";
 cin >> num2;
 if ( num1 % num2 == 0 )
 
 cout << num1 << " is a multiple of " << num2 ;
 if ( num1 % num2 != 0 )//not multiple
 cout << num1 << " is not a multiple of " << num2 ;
 
 
 
 
 
 
 return 0;
}
