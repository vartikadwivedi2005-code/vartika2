#include<stdio.h>
int main()
{
    float a,b;
    char ch;

    printf("Enter two number:");
    
    scanf("%f %f %c",&a,&b,&ch);
    if(ch == '+')
       printf("%f\n",a+b);
    else if(ch == '-') 
       printf("%f\n",a-b);
    else if(ch == '*')  
       printf("%f\n",a*b);
    else if(ch == '/')
       {
         if(b==0)
          printf("Error: Division by zero\n");
        else
          printf("%f\n",a/b);
       }
    else if(ch == '%')  
      {
        if(b==0)
        printf("Error: Modulo ny zero;");
        else
        printf("%d\n",a,b);
      }
    else 
        printf("Invalid operator\n");
        return 0;
    
    }   

       
             