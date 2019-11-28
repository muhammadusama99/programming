#include <iostream>
#include<string>
using namespace std;


    class MotorVehicle{
    	
    private:
        string motor_vehicle,FuelType,colour;
        
        int yearOfManuFacture,engineCapacity;

    public:
        MotorVehicle(string m,string f,string c){
        	
            motor_vehicle=m;
            
            FuelType=f;
            
            colour=c;
            }
        
        void getpart(){
            cout<<"Motor Vehicle:"<<motor_vehicle<<endl<<"Fuel Type:"<<FuelType<<endl<<"Colour:"<<colour<<endl<<"Year of Manufacture:"<<"2019"<<endl<<"Engine Capacity:"<<"3000"<<endl;
            }
        void setpart(string a){
        	
            motor_vehicle=a;
            
            }
        void displaycardetail(){
            getpart();
        }
            };
    
int main()

{
    MotorVehicle a("KIA","High Octain"," Pearl White");
    a.displaycardetail();
    
    
    return 0;
}
