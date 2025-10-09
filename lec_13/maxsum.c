#include<stdio.h>
int main(){
    int arr[5]={-8,2,-3,4,9};
    int maxSum=0;
    for(int i=0;i<5;i++)
    {
        int currSum=0;
        for(int j=1;j<5;j++)
        {
            currSum=currSum+arr[j];
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    printf("%d",maxSum);
}