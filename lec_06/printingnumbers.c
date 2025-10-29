#include<stdio.h>
int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){   //outer loop for rows
        for(int j=0;j<n;j++){   //inner loop for columns
            printf("%d ",num);   //print the current number
            num++;   //increment the number


        }
        printf(" \n");
    }
    printf("after pattern :%d",num);
    return 0;
}