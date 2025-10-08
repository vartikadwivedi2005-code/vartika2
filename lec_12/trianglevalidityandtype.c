#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a choice:");
    scanf("%d %d %d",&a,&b,&c);
    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid sides\n");
        return 0;
    }
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
          printf("Eqilateral\n");
        else if(a==b || b==c || a==c)
          printf("Isosceles\n");
        else
          printf("Scalene\n");
    }
    else
     {
        printf("Not a triangle\n");

     }
     return 0;



}