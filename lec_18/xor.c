// find unique number in an array using xor
#include<stdio.h>
int main(){
    int arr[5]={4,5,3,4,5};   
    int xor=0;
    for(int i=0;i<5;i++)
    {
        xor=xor^arr[i];    //n^0=n  ,,  n^n=0   ,,1^0=1
    }
    printf("%d",xor);
}