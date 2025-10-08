#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(char i=0;i<n;i++){
     for(int k=n-1;k>i;k--)
      printf(" ");
     for(char j=65;j<2*i+1;j++)
      printf("%c",j);
     printf("\n");
    } 
    return 0;

    
}