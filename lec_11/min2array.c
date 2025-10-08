#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int min = arr[0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(arr[i][i]<min){
            min=arr[i][i];
        }
            printf("%d",arr[i][j]);
        
        }printf("\n");
    }
    printf("The minimum value of the 2d array:%d\n",min);
}