#include <stdio.h>
void odd(int a[], int n) {
    printf("Odd numbers: ");
    for(int i=0; i<n; i++)
        if(a[i]%2!=0)
            printf("%d ", a[i]);
}
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) scanf("%d",&arr[i]);
    odd(arr,5);
    return 0;
}
