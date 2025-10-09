#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }
    
    
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }
    
    
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    
    Car car1;
    cout << "Default car:" << endl;
    car1.display();
    
    Car car2("Toyota", "Camry", 2022);
    cout << "Parameterized car:" << endl;
    car2.display();
    
    
    Car car3("Honda", "Civic", 2023);
    cout << "Another car:" << endl;
    car3.display();
    
    return 0;
}