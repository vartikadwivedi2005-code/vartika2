//Given a class reactangle with attributes length and breadth,
// write methods to calculate the area and perimeter of the reactangle.
// Also demostreate the use of these methods in a sample program.

#include <iostream>
using namespace std;
class Reactangle{
    protected:
    int length,breadth;
    public:
    Reactangle(){
        length =1,breadth=1;

        cout << "Default Reactangle:";
    }
    Reactangle(int length,int breadth){
        this-> length =length;   // (this) pointer is used to call its data members
        this-> breadth = breadth;
    }
    int area(){
    return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void display(){
        cout << "Area:" << area() << "\nPerimeter:" << perimeter() << endl;
    }
};

//In the above question create a cuboid class which is the derived class of the reactangle class.
//The cuboid class should have only one member variable i.e.height.Also write a function to find 
//the volume of the cuboid.Note that because of inheritance length and breadth is already available to 
//the cuboid class.What are the changes need to be done in the reactangle class for the new task.



class Cuboid:public Reactangle{
    protected:
    int height;
    public:
    Cuboid(){
        height=1;
    }
    Cuboid(int length,int breadth,int height):Reactangle(length,breadth){
        this->height=height;
    }
    int volume(){
        return length*breadth*height;
    }
    //Function overriding
    void display(){
        cout << "Volume:" << volume();
    }
};
int main(){
    Reactangle r(20,10);
    r.display();   //display ka koi return type nahi hai
    
    Cuboid a(20,10,5);
    a.display();
}
// no run time polymorphism
//(-) -> public 
//(+) -> private