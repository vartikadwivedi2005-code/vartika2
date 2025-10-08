//optimized version of max sum subarray without size
#include<stdio.h>
#include<limits.h>
int main()
{
     int n;printf("array size pls:");scanf("%d",&n);
    int a[n];int maxsum=INT_MIN;int currsum=0;
    printf("enter array elements");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
     currsum+=a[i];
     if(currsum<0)
      currsum=0;
     else
      if(currsum>maxsum)
       maxsum=currsum;
    }    
    printf("%d",maxsum);
    return 0;
    
}
