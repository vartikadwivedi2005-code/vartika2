#include<stdio.h>
int main(){
    int arr[5]={45,56,33,88,3};
    int target=3;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
    
}