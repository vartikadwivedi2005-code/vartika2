#include<stdio.h>
#include<string.h>
int main()
{
    char pass[50];
    printf("Enter your choice:");
    scanf("%s",pass);
    if(strcmp(pass,"Vartika165") == 0)
       printf("Access granted\n");
    else
       printf("Acess denied\n");
    return 0;


}