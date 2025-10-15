#include <stdio.h>
int main(){
    int leftMax[11];
    // int height[12]={0,1,0,2,1,0,1,3,2,1,2};
          int height[11]=        {0,1,0,2,1,0,1,3,2,1,2};
    int rightMax[11];
    int water=0;
    leftMax[0]=height[0];
    for(int i =1;i<11;i++){
        if(height[i]>leftMax[i-1]){
            leftMax[i]=height[i];
        }else{
            leftMax[i]=leftMax[i-1];
        }
    }
        rightMax[10]=height[10];
     for(int i =3;i>=0;i--){
        if(height[i]>rightMax[i+1]){
            rightMax[i]=height[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }


    for(int i=0;i<11;i++){
    int minHieght;
        if(leftMax[i]<rightMax[i]){
            minHieght=leftMax[i];
        }else 
        {
            minHieght=rightMax[i];
        }
        water=water+(minHieght-height[i]);
        
    }
    printf("%d",water);
    return 0;
    
}