#include<stdio.h>
int main()
{
    int n;printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    int key;printf("enter number to be searched");scanf("%d",&key);
    int s=0;int e=n-1;
    for(int i=0;i<n;i++)
    {
        int mid=(s+e)/2;
        if(a[mid]==key){
         printf("%d found at %d",a[mid],mid);
         break;}
        else{
         if(key>a[mid])
          s=mid+1;
         else
          e=mid-1;
        }            

    }
    return 0;

}