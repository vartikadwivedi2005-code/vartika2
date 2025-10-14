#include<stdio.h>     //for using printf and scanf
#include<string.h>     //for using string functions
struct student    //defining a structure
{
    int roll;
    int age;
    char name[20];
    float marks;
    
};
int main(){
    struct student s1[3];   //array of structure
    for(int i=0;i<3;i++){
        printf("Enter name:");
        
        scanf("%s",s1[i].name);
        printf("Enter roll:");
        scanf("%d",&s1[i].roll);
        printf("Enter age:");
        scanf("%d",&s1[i].age);    //
        printf("Enter marks:");
        scanf("%f",&s1[i].marks);    //& is used to get the address of variable

    }
    
        printf("\nSTUDENT DETAILS\n");
        printf("Name is %s\n",s1[i].name);
        printf("Roll is %d\n",s1[i].roll);
        printf("Age is %d\n",s1[i].age);
        printf("Marks is %f\n",s1[i].marks);

    }
    
   