#include <stdio.h>
void even(int a[], int n) {
    printf("Even numbers: ");
    for(int i=0; i<n; i++)
        if(a[i]%2==0)
            printf("%d ", a[i]);
}
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i=0; i<5; i++) scanf("%d",&arr[i]);
    even(arr,5);
    return 0;
}
