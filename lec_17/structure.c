#include<stdio.h>
#include<string.h>
struct address
{
    char city[20];
    char state[20];
    char address[100];
    int pincode;
};

struct student{
    char name[20];
    int roll;
    int age;
    float marks;
    struct address addr;
    
};
int main(){
    struct student s1;
    s1.age=20;
    strcpy(s1.name,"Vartika");
    s1.roll=101;
    s1.marks=98.5;
    strcpy(s1.addr.city,"Jabalpur");
    strcpy(s1.addr.state,"MP");
    strcpy(s1.addr.address,"123 Main St");
    s1.addr.pincode=482001;
     printf("%d",s1.roll);
     printf("\n%d",s1.age);
     printf("\n%s",s1.name);
     printf("\n%f",s1.marks);
     printf("\n%s",s1.addr.address);
     printf("\n%s",s1.addr.city);
     printf("\n%s",s1.addr.state);
     printf("\n%d",s1.addr.pincode);
     return 0;
}