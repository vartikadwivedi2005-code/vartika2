#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="c programming";
    int i, len, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
       if(str[i] == ' ')
       {
           count++;
       }
       else
       {
              continue;
           
       }
    }
    printf("Number of spaces: %d\n", count);
    return 0;
}