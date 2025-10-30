#include <stdio.h>
int sum(int a[], int n) {
    int s = 0;
    for(int i=0; i<n; i++) s += a[i];
    return s;
}
int main() {
    int s[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++) scanf("%d",&s[i]);
    printf("Total Sum = %d", sum(s,5));
    return 0;
}
