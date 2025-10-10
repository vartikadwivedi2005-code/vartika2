#include<stdio.h>
int main()
{
    int arr[]={4,6,7,2,3,9,1};
    for(int i=0;i<7;i++)
    {
        int temp =0;
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])  //comparing each element with rest of the elements
            {
                temp = arr[i];  //swapping if element is greater than other element
                arr[i]=arr[j];   //swapping
                arr[j]=temp;    //swapping
            }
        }
        printf("%d\n",arr[i]);  //printing the array after each pass
    }
    int n;
    printf("Enter the number to be searched:");   //taking input of the number to be searched
    scanf("%d",&n);
    printf("The number is present at index:");   //printing the index of the number
    for(int i=0;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("%d",i);   //printing the index if the number is found
        }
    }
    return 0;
   
}