include <iostream>
using namespace std;

int main() {
    int a, b, temp, sum;
    
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    
    cout << "\nBefore swapping:" << endl;
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
    
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "\nAfter swapping:" << endl;
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
    
    
    sum = a + b;
    
    return 0;
}