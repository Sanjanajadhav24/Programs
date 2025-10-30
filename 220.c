#include <stdio.h>
void reverse(int a[], int n) {
    for(int i=n-1; i>=0; i--)
        printf("%d ", a[i]);
}
int main() {
    int s[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++) scanf("%d",&s[i]);
    printf("Reversed Readings: ");
    reverse(s,5);
    return 0;
}
