#include<stdio.h>
#include<string.h>
int main()
{
    int a[100],i,j,n,t;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;

}