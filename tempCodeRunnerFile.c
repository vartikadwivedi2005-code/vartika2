#include<stdio.h>
int main()
{
    int arr[]={4,6,7,2,3,9,1};
    for(int i=0;i<7;i++)
    {
        int temp =0;
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d\n",arr[i]);
    }
    int n;
    printf("Enter the number to be searched:");
    scanf("%d",&n);
    printf("The number is present at index:");
    for(int i=0;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("%d",i);
        }
    }
    return 0;
   
}