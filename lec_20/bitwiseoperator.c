//bitwise operator
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n & 1)
        printf("Odd");
    else
        printf("Even");

}