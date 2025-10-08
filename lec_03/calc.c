#include<stdio.h>
int main()
{
    float a,b; int ch;
    float x;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    x=(float)(a/b);
    printf("1-->add\n2--.subtract\n3-->multiply\n4-->divide\nenter your choice");
    scanf("%d",&ch);
    if(ch==1)
     printf("addition=%d",a+b);
    else if(ch==2) 
     printf("subtraction=%d",a-b);
    else if(ch==3) 
     printf("multiplication=%d",a*b);
    else if(ch==4)
     printf("division=%f",x);
    else
     printf("inavlid choice");
    return 0;

    }