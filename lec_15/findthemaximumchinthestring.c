#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="aabbcccc";
    int   ln=strlen(str);
    int   freq[256]={0};
    char result;
    int max=0;
    for(int i=0;i<ln;i++)
    {
        freq[str[i]]++;

       
    }
    for(int i=0;i<ln;i++)
    {
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];  //max=freq[i];=1
            result=str[i];  //result=i;=a
        }
  }
        printf("%c -> %d",result,max);
        return 0;
    }


