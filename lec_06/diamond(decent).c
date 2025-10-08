#include<stdio.h>
int main()
{
    int n;printf("enter your rows:");int comp;
    scanf("%d",&n);
    for(int i=0;i<2*n;i++){
     if(n<=5)
     comp=n-i;
     else
      comp=i-n;
     for(int j=0;j<comp;j++)
      printf("*");
     printf("\n"); 
    } 
          
}