#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %llu", num, fact);
    return 0;
}
