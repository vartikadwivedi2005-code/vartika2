#include<stdio.h>
int main()
{
    int arr1[]={3,5,7,2,8,6};
    int arr2[]={1,9,4,2,6,5};
    int arr[12];
    for(int i=0;i<6;i++)
    {
        arr[i]=arr1[i];
        arr[i+6]=arr2[i];
    }
    int n=12;
    printf("The merged array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}