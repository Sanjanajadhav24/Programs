#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
