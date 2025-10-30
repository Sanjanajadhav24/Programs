#include <stdio.h>
int min(int a[], int n) {
    int m = a[0];
    for(int i=1; i<n; i++)
        if(a[i]<m) m=a[i];
    return m;
}
int main() {
    int s[5];
    printf("Enter 5 readings: ");
    for(int i=0; i<5; i++) scanf("%d",&s[i]);
    printf("Minimum Reading = %d", min(s,5));
    return 0;
}
