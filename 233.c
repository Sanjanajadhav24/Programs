#include <stdio.h>
void countPosNeg(int a[], int n) {
    int pos=0, neg=0;
    for(int i=0; i<n; i++) {
        if(a[i]>=0) pos++;
        else neg++;
    }
    printf("Positive = %d, Negative = %d", pos, neg);
}
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) scanf("%d",&arr[i]);
    countPosNeg(arr,5);
    return 0;
}
