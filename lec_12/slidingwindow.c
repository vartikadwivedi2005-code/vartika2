#include<stdio.h>
int maxArraySum(int arr[],int n,int k){
    int wSum=0;
    for(int i=0;i<=k;i++)
    {
        wSum=wSum+arr[i];
    }
        int maxSum=wSum;
        for(int j=k;j<k;j++)
        {
            wSum = wSum + arr[j] - arr[j-k];
            if(wSum > maxSum)
            {
               maxSum = wSum;
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