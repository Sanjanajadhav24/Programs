#include <stdio.h>
float average(int a[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) sum += a[i];
    return (float)sum/n;
}
int main() {
    int s[5];
    printf("Enter 5 sensor readings: ");
    for(int i=0; i<5; i++) scanf("%d", &s[i]);
    printf("Average Sensor Reading = %.2f", average(s,5));
    return 0;
}
