#include<stdio.h>
int main(){
    int n=3;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    printf("after pattern:%c",ch);
    return 0;
}