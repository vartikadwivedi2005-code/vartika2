#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abccaaccaabbb";
    int len=strlen(str);
    int freq[256]={0};
    for(int i=0;i<len;i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;i<len;i++)
    {
        if(freq[str[i]]>1)
        {
            printf("%c is repeated %d times\n",str[i],freq[str[i]]);
            freq[str[i]]=0; // To avoid printing the same character again
        }
    }

    return 0;
}