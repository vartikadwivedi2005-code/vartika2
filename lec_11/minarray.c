#include<stdio.h>
int main()
{
    int arr[5]={45,34,67,89,12};
    int min = arr[0];
    for(int i=4;i<5;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum value is the array is:%d",min);
    return 0;

}