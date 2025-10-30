#include <stdio.h>
int countAbove50(int a[], int n) {
    int count = 0;
    for(int i=0; i<n; i++)
        if(a[i]>50) count++;
    return count;
}
int main() {
    int s[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++) scanf("%d",&s[i]);
    printf("Count Above 50 = %d", countAbove50(s,5));
    return 0;
}
