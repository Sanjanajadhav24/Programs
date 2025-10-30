#include <stdio.h>
int countEven(int a[], int n) {
    int c=0;
    for(int i=0; i<n; i++)
        if(a[i]%2==0) c++;
    return c;
}
int main() {
    int s[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++) scanf("%d",&s[i]);
    printf("Even Readings Count = %d", countEven(s,5));
    return 0;
}
