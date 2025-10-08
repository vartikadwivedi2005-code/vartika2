#include <stdio.h>
 int main() {
    int m1, m2, m3;
    printf("Enter your choice:");
    scanf("%d %d %d", &m1, &m2, &m3);
    if (m1<0 || m1>100 || m2<0 || m2>100 || m3<0 || m3>100) {
        printf("Invalid marks\n");
        return 0;
    }
    int total = m1+m2+m3;
    float per = total/3.0;
    printf("Total: %d\n", total);
    printf("Percentage: %.2f\n", per);
    if (m1<33||m2<33||m3<33) {
        printf("Fail\n");
    } else {
        printf("Pass\n");
        if (per>=90) printf("Grade: A\n");
        else if (per>=75) printf("Grade: B\n");
        else if (per>=50) printf("Grade: C\n");
        else printf("Grade: D\n");
    }
    return 0;
 }