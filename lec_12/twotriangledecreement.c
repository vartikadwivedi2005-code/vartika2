#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf("*");
        }
        for(int k=0;k<=i;k++)
        {
            printf(" ");
        }
        for(int p=0;p<=i;p++)
        {
            printf(" ");
        }
        for(int k=n;k>i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}