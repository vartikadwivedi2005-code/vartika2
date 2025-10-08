#include<stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        
        for(int j = i; j < n; j++)
        {
            printf("  ");
        }
         for(ch = 'A'; ch < 'A' + i; ch++)
         {
            
            printf("%c ", ch);
         }
         printf("\n");

    }
    return 0;
}