#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a=4;
    b=5;
    temp=a;
    a=b;
    b=temp;
    cout << "before swapping a=4 and b=5\n",a,b;
    cout << "after swapping b=5 and a=4\n",a,b;

    return 0;

}