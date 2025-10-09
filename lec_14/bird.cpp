include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout << "Animal is eating." << endl;

    }
};
class Bird : public Animal
{
    public:
    void walk()
    {
        cout << "This animal walks on land" << endl;
    }
};