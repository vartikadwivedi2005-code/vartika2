#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    string brand = "Ford";
    void honk(){
        cout << "Tuut, tuut! \n";
    }
};
class Car: public Vehicle{
  public:
    string model = "\nMustung";
};
int main(){
    Car mycar;
    mycar.honk();
    cout << mycar.brand + " " + mycar.model;
    return 0;
}