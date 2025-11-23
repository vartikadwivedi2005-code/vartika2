#include<iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string fueltype;
    
    void start(){
        cout << "Car Started";
    }
    void stop(){
        cout << "Car Stopped";
    }
    
};
class Family Car : virtual public Car{
        fueltype=1;
    };
    class Sports Car: virtual public Car{
        this -> fueltype=fueltype;
        
    };
    class Suv: public Family Car ,public Sports Car{

    };
int main(){
    Suv s1();
    s1.Family Car::fueltype = "Petrol";

}    
