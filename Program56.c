#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d "
