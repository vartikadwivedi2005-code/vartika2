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
class Family Car:public Car{
        
    };
    class Sports Car:public Car{

    };
    class Suv: public Family Car ,public Sports Car{

    };
int main(){
    Suv s1;
    s1.fueltype = "Petrol";
    s1.start();
    s1.stop();
}    
