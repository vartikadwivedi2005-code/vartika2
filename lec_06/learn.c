#include<stdio.h>
int main()
{
   int num = 123;
   int original = num;
   int res = 0;
   while(num != 0) 
   {
      int lastdigit = num % 10;
      res=  res * 10 + lastdigit;
      num = num/10;
   }
   if(original==res)
     printf("pallindrome");
   else
    printf("not pallindrome");  

   printf("\nReversed number is:%d",res);
   return 0;
}