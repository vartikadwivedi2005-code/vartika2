#include<stdio.h>
int main()
{
    char color;
    printf("Enter traffic light color (R/G/Y):");
    scanf(" %c", &color);
    switch(color)
    {
        case 'R':printf("STOP!\n"); 
                 break;
        case 'G':printf("GO!\n");
                 break;
        case 'Y':printf("WAIT!\n");
                 break;
        default:
                printf("Invalid color!\n");
    }
    return 0;
}