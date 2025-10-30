#include <stdio.h>
float avg(int a[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) sum+=a[i];
    return (float)sum/n;
}
int main() {
    int s[10];
    printf("Enter 10 readings: ");
    for(int i=0; i<10; i++) scanf("%d",&s[i]);
    printf("Average = %.2f", avg(s,10));
    return 0;
}
