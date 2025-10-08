 #include<stdio.h>
int main()
{  
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     for(int k=n-1;k>i;k--)
      printf(" ");
     for(int j=0;j<2*i+1;j++)
     {
       if(j==0||j==2*i)
        printf("*");
     }
     printf("\n");
    } 
    return 0;

    
}