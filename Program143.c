#include <stdio.h>
int main() {
    int n, sum = 0, r;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
