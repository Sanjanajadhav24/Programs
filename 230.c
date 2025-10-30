#include <stdio.h>
float avgPositive(int a[], int n) {
    int sum=0, count=0;
    for(int i=0; i<n; i++)
        if(a[i]>0) { sum+=a[i]; count++; }
    return (count>0) ? (float)sum/count : 0;
}
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) scanf("%d",&arr[i]);
    printf("Average of Positive Numbers = %.2f", avgPositive(arr,5));
    return 0;
}
