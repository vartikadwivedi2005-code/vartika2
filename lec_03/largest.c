#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);

    if(i>j)
     printf("i is greatest");
    else{
        if(i==j)
         printf("i and j are equal");
        else 
         printf("j is greatest");

    } 
    return 0;
}