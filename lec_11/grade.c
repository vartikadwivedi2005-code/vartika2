#include<stdio.h>
int main()
{
    char grade;
    printf("Enter the grade:");
    scanf("%c",&grade);
    switch(grade)
    {
       case'A':printf("Excellent!\n");
               break;
       case'B':printf("Good!\n");
               break;
       case'C':printf("Average!\n");
               break;
       case'D':printf("Below Average!\n");
               break;
       case'E':printf("Fail!\n");
               break;
       default:
            printf("INVALID CHOICE");  
    } 
    return 0;      
}