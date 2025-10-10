#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int len1, len2, cmp;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    

    len1 = strlen(str1);
    len2 = strlen(str2);
    cmp = strcmp(str1, str2);

    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);

    if(cmp == 0)
        printf("Both strings are equal.\n");
    else if(cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    return 0;
}