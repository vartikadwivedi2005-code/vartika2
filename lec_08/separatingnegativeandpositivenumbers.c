#include<stdio.h>
int main()
{
    int arr[]={-3,9,0,-6,8,-4,-5,7};  
    int n=8;

    printf("Original array:\n");
    for(int i=0;i<n;i++)     //printing the original array
    {
        printf("%d ",arr[i]);   
    }
    int left=0;    //initializing two pointers
    int right=n-1;     //initializing two pointers
    while(left<=right)   //two pointer approach
    {
        if(arr[left] < 0)   //if left is negative then move left pointer to right
        {
            left++;
        }
        else if(arr[right] >= 0)   //if right is positive then move right pointer to left
        { 
            right--;
        }
        else
        {
            int temp=arr[left];   //swap left and right elements
            arr[left]=arr[right];   //swapping
            arr[right]=temp;   //swapping
            left++;    //move left pointer to right
            right--;    //move right pointer to left
        }
    }
    printf("\nArray after rearranging:\n");   //printing the array after rearranging
    

    for(int i=0;i<n;i++)   //printing the rearranged array
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
