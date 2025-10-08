#include<stdio.h>
int evenodd(a)
{
    
    if(a % 2 == 0){
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    
}
int main()
{
    int num;
    printf("Enter a numbers:");
    scanf("%d",num);
    evenodd();
    return 0;
}