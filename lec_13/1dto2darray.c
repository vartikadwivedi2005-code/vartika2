#include<stdio.h>
int main()
{    
    printf("CONVERTING 2D ARRAY TO 1D ARRAY.\n");
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr1[9];
    int k=0;
    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++)
        {
            arr1[k]=arr[i][j];
            k++;
            
        }
        
    }
    printf("THE VALUE IS:%d\n",arr1[k]);
    
    
    return 0;
}