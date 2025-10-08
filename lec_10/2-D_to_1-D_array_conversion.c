#include<stdio.h>
int main()
{
    int m,n;printf("Enter number of rows:");scanf("%d",&m);
    printf("Enter number of coloumn:");scanf("%d",&n);
    int a[m][n],b[m*n],count=0;
    printf("Enter elements of array:");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
     {
      if(count<m*n)
      {
       b[count]=a[i][j];
       count++;
      }
     } 
    }
    printf("Converted array from 2-D to 1-D is:");
    for(int j=0;j<m*n;j++)
     printf("%d ",b[j]);
    return 0;
}     
