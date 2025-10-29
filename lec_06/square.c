#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++)
        {
            printf("* ");//print numbers from 1 to n
        }
        printf("\n");  //new line after each row
    }
    return 0;
}