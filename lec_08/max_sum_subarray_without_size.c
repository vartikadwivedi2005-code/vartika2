#include<stdio.h>
#include<limits.h>
int main()
{
    int n;printf("array size pls:");scanf("%d",&n);
    int a[n];int maxsum=0;
    printf("enter array elements");
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
     int currsum=0;
     for(int j=i;j<5;j++){
       currsum+=a[j];
       if(currsum>maxsum)
        maxsum=currsum;
     }
    }
    printf("maximum sum=%d",maxsum);
    return 0;    
}
