#include<stdio.h>
int main()
{
    int a[6];
    int k;
    printf("enetr any number:");
    scanf("%d",&k);
    printf("array elements");

    for(int i=0;i<6;i++)
     scanf("%d",&a[i]);
    for(int i=0;i<6;i++)
     for(int j=i+1;j<6;j++)
       if(a[i]+a[j]==k)
        printf("%d %d\n",a[i],a[j]);
    return 0;
}
