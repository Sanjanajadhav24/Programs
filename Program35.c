#include <stdio.h>

int main() {
    int a, b, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    remainder = a % b;
    printf("Remainder = %d", remainder);
    return 0;
}
