#include<stdio.h>
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            printf("%c",ch+1);
            
        }
        printf("\n");
    }
    return 0;
}