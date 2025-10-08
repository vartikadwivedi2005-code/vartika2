#include <stdio.h>
 int main()
 {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n == 0)
    { 
      printf("Zero\n");
    }
    else if(n > 0)
      {
          printf("Positive\n");
      }
    else 
        printf("Negative\n");
    return 0;
 }