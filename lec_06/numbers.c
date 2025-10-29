#include<stdio.h>
int main(){
    int n=4;
    
    for(int i=0;i<n;i++){  //outer loop for rows
        for(int j=1;j<=n;j++){  //inner loop for columns
            printf("%d ",j);//print numbers from 1 to n

        
        } printf("\n");  //new line after each row

    }
   
    return 0;  
}