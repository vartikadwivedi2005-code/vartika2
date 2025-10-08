#include <stdio.h>

int main() {

    // 1. Variables and Data Types
    int age = 20;       // integer variable
    float pi = 3.14;    // float variable
    char grade = 'A';   // character variable

    printf("Age = %d\n", age);     
    printf("Pi = %.2f\n", pi);     
    printf("Grade = %c\n\n", grade); 

    // 2. Taking input from user
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("You entered: %d\n\n", a);

    // 3. Arithmetic Operators
    int x = 10, y = 3;
    printf("x + y = %d\n", x + y);   // Addition
    printf("x - y = %d\n", x - y);   // Subtraction
    printf("x * y = %d\n", x * y);   // Multiplication
    printf("x / y = %d\n", x / y);   // Division (integer)
    printf("x %% y = %d\n\n", x % y); // Modulus (remainder)

    // 4. Type Casting (to get decimal result in division)
    float result = (float)x / y;  // explicit type casting
    printf("Type casted division: %.2f\n\n", result);

    // 5. Increment and Decrement
    int num = 5;
    printf("num = %d\n", num);
    printf("num++ = %d (post-increment)\n", num++); // print first, then increase
    printf("Now num = %d\n", num);
    printf("++num = %d (pre-increment)\n", ++num); // increase first, then print
    printf("Now num = %d\n\n", num);

    // 6. If-Else Example
   
    // 8. ASCII Example
    int ascii = 65;
    char ch = ascii;  // converting int to char
    printf("ASCII value %d = character '%c'\n", ascii, ch);

    return 0;
}

