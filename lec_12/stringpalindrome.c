#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="radar";
    int len=strlen(str);
    int isTrue=1;
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            isTrue=0;
            break;
        }
    }
    if(isTrue)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
   
    return 0;
}