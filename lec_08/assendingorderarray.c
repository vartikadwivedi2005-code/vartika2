#include<stdio.h>
int main()
{
    int arr[]={4,5,1,0,7,8};
    for(int i=0;i<5;i++)
    {
        int temp =0;
        for(int j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

        
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}