#include <stdio.h>
int main() {
    int n, i, first, second;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    first = second = a[0];
    for(i = 0; i < n; i++) {
        if(a[i] > first) {
            second = first;
            first = a[i];
        } else if(a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    printf("Second Largest = %d", second);
    return 0;
}
