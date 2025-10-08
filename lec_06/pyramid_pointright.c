#include<stdio.h>
int main()
{
    int n,i,j;
    printf("entr your rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     for(j=0;j<=i;j++)
      printf("*");
     printf("\n"); }
    for(int k=0;k<(n+1);k++)
     printf("*");
    printf("\n");
    for(i=n;i>0;i--){
     for(j=0;j<i;j++)
      printf("*");
     printf("\n"); }  
    return 0;   
}
