#include<stdio.h>
int main()
{
    int a;
    char s;
    printf("Enter the given currency into rupees:");
    scanf("%d %c",&a,&s);
    switch (s)
    {
    case 'd':
        
        printf("%f",a/87.85);
        break;
    case 'y':


        printf("%f",a/12);
        break;
    
    default:
        printf("INVALID OPERATOR");       
    
    }
    return 0;
}