 #include <stdio.h>
 int main()
{
    int n, rev=0, temp;
    printf("Enter your choice:");
    scanf("%d", &n);
    if (n < 0) {
        printf("Not Palindrome\n");
    
        return 0;
    }
    temp = n;
    while (temp > 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if (rev == n) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}