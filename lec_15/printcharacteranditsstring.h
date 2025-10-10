#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "vartika";   // Input string
    int freq[256] = {0};   
    int ln = strlen(str);  // Length of the string

    for (int i = 0; i < ln; i++) {
        freq[str[i]]++; // Increment frequency of character
    }
 
    for (int i = 0; i < 256; i++) {    // Iterate through all possible characters
        if (freq[i] > 0) {  // If character occurred
            printf("%c: %d\n", i, freq[i]); // Print character and its frequency
        }
    }

    return 0;
}
