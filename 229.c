#include <stdio.h>
float findAverage(int a[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += a[i];
    return (float)sum / n;
}
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) scanf("%d", &arr[i]);
    printf("Average = %.2f", findAverage(arr,5));
    return 0;
}
