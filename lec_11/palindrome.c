#include<stdio.h>
int main()
{
    int num = 123;
    int original = num;  // Remove the duplicate declaration
    int res = 0;
    
    while (num != 0)
    {
        int lastdigit = num % 10;
        res = res * 10 + lastdigit;
        num = num / 10;
    }
    
    if (original == res)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    printf("\nReversed number is: %d", res);
    return 0;
}