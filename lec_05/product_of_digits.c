#include<stdio.h>
int main()
{
    int n,digit,prod=1;
    printf("enter a number:");
    scanf("%d",&n);
    int i=n;
    while(i>0)
    {
        digit=i%10;
        prod*=digit;
        i/=10;
    }
    printf("product of digits=%d",prod);
    return 0;
}