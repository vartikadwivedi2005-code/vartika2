#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){   //outer loop for rows
        char ch='A';   //initialize character to 'A' at the start of each row
        for(int j=0;j<n;j++){   //inner loop for columns
            
            printf("%c",ch);   //print character
            ch=ch+1;  //increment character to next character
        }
        printf("\n");
    }
    return 0;
}