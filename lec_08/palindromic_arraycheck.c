#include<stdio.h>
int main()
{
    int a[7];int i,j;
    printf("array elements");

    for( j=0;j<7;j++)
     scanf("%d",&a[j]);
    for( i=0;i<3;i++)
      if(a[i]!=a[7-i-1])
       break;
    if(i<3)
     printf("array not palindromic");
    else
     printf("array is palindromic");
    return 0;
}          