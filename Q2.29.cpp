#include <iostream>
using namespace std;
int main ()
{
	int side,peri,area;
	cout << "Enter length of a side of a square: ";
	
	cin >> side;
	
	area=side*side;
	
	
	peri=4*side;
	cout << "Area is: " << area << "\t perimeter is: " << peri;	
	
	
	return 0;
}
