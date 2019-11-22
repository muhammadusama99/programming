#include<iostream>
using namespace std;
int main(){
	// given constant value for Pi 3.141....
	//diameter= radius*2....
	//circumference= constant value*diameter...
	//area=constantvalue*radius...
	
	int radius, diameter;
	
  double constantvalue, circumference, area;

  cout << "  Radius of the circle: ";
  cin >>radius ;
  diameter = radius * 2;
  cout << " Diameter is: "<< diameter << "\n";
  constantvalue = 3.14159;
  circumference = constantvalue * diameter;
  cout<< " Circumference is: "<< circumference<< "\n";
  area = constantvalue * radius * radius;
  cout <<" Area of the circle is: " <<area ;
	
	return 0;
}
