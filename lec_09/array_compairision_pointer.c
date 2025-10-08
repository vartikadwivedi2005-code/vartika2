#include<stdio.h>
int main()
{
     int n;printf("enter sizeof array:");scanf("%d",&n);
     int m;printf("enter sizeof 2nd array:");scanf("%d",&m);
     int a[n],b[m],*p1,*p2,flag=0;
     printf("enter first array elements:");
     for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
     printf("enter 2nd array elements:"); 
     for(int i=0;i<n;i++)
      scanf("%d",&b[i]);
     if(n==m)
     {
      for(int i=0;i<n;i++)
      {
       if(*p1!=*p2){
        flag=1;
        break;}
       p1++;
       p2++; 
      }
      if(flag==1)
       printf("array not equal");
      else
       printf("array is equal");
     }
    else
     printf("array not equal");     

}