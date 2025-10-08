#include<stdio.h>
int main()
{    
    int n;printf("enter sizeof array:");scanf("%d",&n);
    int a[n];int *p,*z;
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    p=a;
    for(int i=0;i<n/2;i++)
    {
      int temp=*(p);
      *p=*((p+n))-n-i;
      *((p+n))-n-i=temp;
    }
    z=a;
    for(int i=0;i<n;i++)
     printf("%d",*z);
    return 0;

}