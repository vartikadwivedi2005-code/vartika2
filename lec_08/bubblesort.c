#include<stdio.h>
int main()
{
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Sorted array:");
    for(int i=0;i<n-1;i++)
     for(int j=0;j<n-i-1;j++) //n-i-1 se ek baar sort hone  par jab sabse bada element end
     if(a[j]>a[j+1])          // main jayega to usse comparision nhi hoga
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

      } 
    for(int i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0; 

}