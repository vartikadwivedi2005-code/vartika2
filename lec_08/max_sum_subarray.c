#include<stdio.h>
int main()
{

 int n;printf("enter array size");int i,j,max=0;

 scanf("%d",&n);
 int a[n];
 printf("array elements:");
 for( i=0;i<n;i++)
  scanf("%d",&a[i]);
 int k;
 printf("enter size of subarray:");
 scanf("%d",&k);
 for( i=0;i<=n-k;i++){
   int currsum=0;
  for( j=i;j<i+k;j++)
   currsum+=a[j];


  if(currsum>max)
   max=currsum;
 }
 printf("the sum of subarray is=%d",max);
 return 0;    
//if saare number negatie ho toh max main INT_MIN PASS KARDO now agar saare value negative hue toh bhi code run karga bas <limits.h>header file include karlena
//sizeof(array)/sizeof(one lement)=size of original array
}
