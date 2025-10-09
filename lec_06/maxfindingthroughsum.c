#include<stdio.h>
int maxArraySum(int arr[],int n,int k){
    int maxSum=0;
    for(int i=0;i<=n-k;i++)
    {
        int currSum=0;
        for(int j=1;j<i+k;j++)
        {
            currSum=currSum+arr[j];
        }
        if(currSum>maxSum)
        {
            maxSum = currSum;
        }
    }
    return maxSum;

}
int main()
{
    int arr[7]={2,4,5,6,7,5,4};
    int k=3;
    int n=     sizeof(arr)/sizeof(arr[0]);
    int data =   maxArraySum(arr,n,k);
    printf("%d",data);
    
    
}