#include <stdio.h>

int main() {
    int arr[5], sum = 0, i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);
    return 0;
}
