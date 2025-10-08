#include<stdio.h>
int main()
{
    int arr[5]={45,34,67,89,12};
    int max = arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum value is the array is:%d",max);
    return 0;

}